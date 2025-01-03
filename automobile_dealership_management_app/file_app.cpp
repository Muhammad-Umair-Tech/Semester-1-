#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
using namespace std;

void app_title();
string home_screen_choice();
string choice_customer();
string choice_admin();
void new_admin();
void view_admins();
void view_inventory();
void add_to_inventory();
void delete_an_engine_from_inventory(int engine_to_delete);
void delete_a_car_from_cart(int engine_to_delete);
void update_car_of_engine(int engine_to_update);
void add_to_cart(string entered_car);
void view_cart();
void car_searching_customer(string search_car);
int search_car_from_index(string search_car, int start_index);
int count_cars(string search_car, string cars_array[], int array_size);
bool car_exists_in_inventory(string search_car);
bool engine_exists_in_inventory(int check_engine);
void view_details_of_a_car(int index, int count);
bool car_exists_in_cart(string car);
bool engine_exists_in_cart(int engine);
int search_an_engine_index(int search_engine);
void take_customer_info();
void view_transactions();
void load_inventory_arrays();
void load_cart_related();
void load_transactions_arrays();
void update_inventory_file();
void update_cart_file();
void update_transactions_file();
string parse_data(string line, int field);
bool admin_login_found(string entered_name, string entered_password);
string validate_string_type_number(string number, int number_length);
string validate_string(string line);
void load_admin_credentials();
void update_admin_credentials();
void delete_admin(string admin_name, string admin_password);

int total_cars = 0; // cars num is has 0 inclusive
string companies[30];
string cars[30];
int engines[30];
bool is_automatic[30];
int fuels[30]; // 1: petrol 2: hybrid 3: electric
int prices[30];
string cart_cars[30];
int cart_engines[30];
int cart_totals[30];
string customer_names[30];
string customer_no[30];
int cars_in_cart = 0; // car 1 has number 0
int checkouts = 0; // checkout 1 has number 0
int cart_total = 0, total_earnings = 0;
string admin_names[5];
string admin_passwords[5];
int admins = 0;

int main()
{
    system("color E0");
    load_inventory_arrays();
    load_cart_related();
    load_transactions_arrays();
    load_admin_credentials();
    string choice;
    while(true)
    {
        app_title();
        choice = home_screen_choice();
        if(choice == "1")
        {
            choice = choice_customer();
        }
        else if(choice == "2")
        {
            app_title();
            cout << "Admin" << endl;
            choice = choice_admin();
        }
        else if(choice == "3")
        {
            break;
        }
        else
        {
            cout << "Invalid input." << endl;
            getch();
            continue;
        }
        if(choice == "4") // choice_admin and choice_customer return 4 when the user needs to go back to the home screen
            continue;
        cout << endl << "Press any key to go to home page.";
        getch();
    }
    return 0;
}


string home_screen_choice()
{
    string choice;
    cout << "Choose by entering the corresponding number." << endl;    
    cout << "1. Customer" << endl;
    cout << "2. Admin" << endl;
    cout << "3. Exit application" << endl;
    cout << "Choice: ";
    getline(cin, choice);
    return choice;
}


string choice_customer()
{
    while(true)
    {
        string choice;
        app_title();
        cout << "CUSTOMER" << endl;
        cout << "Welcome!" << endl;
        cout << "Choose by entering the corresponding number." << endl;
        cout << "1. View cars" << endl;
        cout << "2. Search a car" << endl;
        cout << "3. Add a car to cart" << endl;
        cout << "4. View cart" << endl;
        cout << "5. Remove a car from cart" << endl;
        cout << "6. Check out" << endl;
        cout << "7. Back to home page" << endl;
        cout << "Choice: ";
        getline(cin, choice);
        if(choice == "1") // view inventory
            view_inventory();
        else if(choice == "2") // search cars
        {
            string search_car;
            int required_car_index;
            bool car_exists = false;
            cout << "Enter car name: ";
            getline(cin, search_car);
            if(car_exists_in_inventory(search_car))
                car_searching_customer(search_car);
            else
                cout << "Sorry, no such car is available." << endl;
        }
        else if(choice == "3") // add a cart to cart
        {
            string enetered_car;
            view_inventory();
            cout << endl << endl;
            cout << "Enter car name: ";
            getline(cin,enetered_car);
            if(car_exists_in_inventory(enetered_car) == true)
            {
                add_to_cart(enetered_car);
                update_cart_file();
            }
            else
                cout << "Sorry, no such car is available." << endl;
        }
        else if(choice == "4") // view cart
        {
            view_cart();
        }
        else if(choice == "5") // delete a car from cart
        {
            string car_name;
            int engine_to_delete;
            view_cart();
            cout << "Enter car name: ";
            getline(cin, car_name);
            if(car_exists_in_cart(car_name))
            {
                cout << "Enter engine power: ";
                cin >> engine_to_delete;
                if(engine_exists_in_cart(engine_to_delete))
                {
                    delete_a_car_from_cart(engine_to_delete);
                    update_cart_file();
                }
                else
                    cout << "Sorry, no such car is available." << endl;
            }
            else
                cout << "Sorry, no such car is available." << endl;
        }
        else if(choice == "6") // checkout
        {
            int cart_engine;
            view_cart();
            take_customer_info();
            cart_totals[checkouts] = cart_total;
            total_earnings += cart_total;
            cart_total = 0;
            checkouts++;
            update_transactions_file();
            cout << "Thank you for your purchase!" << endl;
            for(int i = 0; i < cars_in_cart; i++)
            {
                cart_engine = cart_engines[i];
                delete_a_car_from_cart(cart_engine);
                delete_an_engine_from_inventory(cart_engine);
            }
            update_cart_file();
            update_inventory_file();
        }
        else if(choice == "7") // back to home page
            return "4";
        else
            cout << "Invalid input." << endl;
        cout << endl << "Press any key to continue.";
        getch();
    }
}


void car_searching_customer(string search_car)
{
    int car_index, count = 1;
    cout << endl << "\tCompany\t\tCar\t\tEngine(cc) \t\tType\t\t\tFuel\t\tPrice(PKR)" << endl << endl;
    for(int i = 0; i <= total_cars; i++)
    {
        if(cars[i] == search_car)
        {
            car_index = search_car_from_index(search_car, i);
            view_details_of_a_car(car_index, count);
            count++;
        }
    }   
}


int search_car_from_index(string search_car, int start_index)
{
    int index;
    for(int i = start_index; i <= total_cars; i++)
    {
        if(cars[i] == search_car)
        {
            index = i;
            break;
        }
    }
    return index;
}


int search_an_engine_index(int search_engine)
{
    for(int i = 0; i <= total_cars; i++)
    {
        if(engines[i] == search_engine)
            return i;
    }
}


string choice_admin()
{
    string entered_password, entered_name;
    cout << "LOGIN" << endl;
    cout << "Enter name: ";
    getline(cin, entered_name);
    cout << "Enter password: ";
    getline(cin, entered_password);
    while(true)
    {
        if(admin_login_found(entered_name, entered_password))
        {
            string choice;
            app_title();
            cout << "ADMIN" << endl;
            cout << "Welcome!" << endl;
            cout << "Choose by entering the corresponding number." << endl;
            cout << "1. View inventory" << endl;
            cout << "2. Search a car" << endl;
            cout << "3. Add a car" << endl;
            cout << "4. Delete a car" << endl;
            cout << "5. Edit details of a car" << endl;
            cout << "6. View transaction history" << endl;
            cout << "7. New admin sign up" << endl;
            cout << "8. Remove an admin" << endl;
            cout << "9. View admins" << endl;
            cout << "10. Back to home page" << endl;
            cout << "Choice: ";
            getline(cin, choice);
            if(choice == "1") // view inventory
                view_inventory();
            else if(choice == "2") // search a car
            {
                string search_car;
                int required_car_index;
                bool car_exists = false;
                cout << "Enter car name: ";
                getline(cin, search_car);
                if(car_exists_in_inventory(search_car))
                    car_searching_customer(search_car);
                else
                    cout << "Sorry, no such car is available." << endl;
            }
            else if(choice == "3") // add a car
            {
                add_to_inventory();
                update_inventory_file();
            }
            else if(choice == "4") // delete a car
            {
                string car_to_delete;
                int engine_to_delete;
                cout << "Enter car name: ";
                getline(cin, car_to_delete);
                if(car_exists_in_inventory(car_to_delete))
                {
                    cout << "Enter engine power: ";
                    cin >> engine_to_delete;
                    if(engine_exists_in_inventory(engine_to_delete))
                    {
                        delete_an_engine_from_inventory(engine_to_delete);
                        update_inventory_file();
                    }
                    else 
                        cout << "Sorry, no such car is available." << endl;
                }
                else
                    cout << "Sorry, no such car is available." << endl;
            }
            else if(choice == "5") // edit a car
            {
                string car_to_update;
                int engine_to_update;
                cout << "Enter the name of the car to edit: ";
                getline(cin, car_to_update);
                if(car_exists_in_inventory(car_to_update))
                {
                    cout << "Enter the engine power of the car to edit: ";
                    cin >> engine_to_update;
                    if(engine_exists_in_inventory(engine_to_update))
                    {
                        update_car_of_engine(engine_to_update);
                        update_inventory_file();
                    }
                    else
                        cout << "Sorry, no such car is available." << endl;
                }
                else
                    cout << "Sorry, no such car is available." << endl;
            }
            else if(choice == "6") // view transaction history
            {
                view_transactions();
            }
            else if(choice == "7") // new admin sign up
            {
                if(admins < 5)
                {
                    new_admin();
                    load_admin_credentials();
                    admins++;
                }
                else
                    cout << "Maximum number of admins reached." << endl;
            }
            else if(choice == "8") // remove an admin
            {
                string name, password;
                cout << "Enter admin name: ";
                cin >> name;
                cout << "Enter admin password: ";
                cin >> password;
                if(admin_login_found(name, password))
                {
                    if(admins > 1)
                    {
                        delete_admin(name, password);
                        update_admin_credentials();
                    }
                    else
                        cout << "There should be at least one admin." << endl;
                }
                else
                    cout << "Admin not found" << endl;
            }
            else if(choice == "9")
            {
                view_admins();
            }
            else if(choice == "10") // back to home page
                return "4";
            else
                cout << "Invalid input." << endl;
            cout << endl << "Press any key to continue.";
            getch();
        }
        else
        {
            cout << "Incorrect name or password." << endl;
            return "";
        }
    }
}




void view_inventory()
{
    int count = 1;
    cout << endl << endl << "\tCompany\t\tCar\t\tEngine(cc) \t\tType\t\t\tFuel\t\tPrice(PKR)" << endl << endl;
    for(int i = 0; i <= total_cars; i++)
    {
        view_details_of_a_car(i, count);
        count++;
    }
}


void add_to_inventory()
{
    if(total_cars < 30)
    {
        cout << endl << "Company: ";
        getline(cin, companies[total_cars + 1]);
        cout << "Car model name: ";
        getline(cin, cars[total_cars + 1]);
        cout << "Engine capacity(cc): ";
        cin >> engines[total_cars + 1];
        cout << "Price: ";
        cin >> prices[total_cars + 1];
        cout << "Is automatic(1/0): ";
        cin >> is_automatic[total_cars + 1];
        cout << "Fuel - 1 for petrol, 2 for hybrid, 3 for electric: ";
        cin >> fuels[total_cars + 1];
        total_cars++;
    }
    else
        cout << "No more room in the dealership for more cars." << endl;
}



int search_a_cart_engine_index(int search_engine)
{
    int required_car_index = 0;
    for(int i = 0; i <= total_cars; i++)
    {
        if(cart_engines[i] == search_engine)
        {
            required_car_index = i;
            break;
        }
        else
            required_car_index = -1;                        
    }
    return required_car_index;
}


void delete_an_engine_from_inventory(int engine_to_delete)
{
    int to_delete_index = search_an_engine_index(engine_to_delete);
    for(int i = to_delete_index; i <= total_cars; i++)
    {
        cars[i] = cars[i + 1];
        engines[i] = engines[i + 1];
        companies[i] = companies[i + 1];
        is_automatic[i] = is_automatic[i + 1];
        fuels[i] = fuels[i + 1];
        prices[i] = prices[i + 1];
    }
    cars[total_cars] = "";
    engines[total_cars] = 0;
    companies[total_cars] = "";
    is_automatic[total_cars] = 0;
    fuels[total_cars] = 0;
    prices[total_cars] = 0;
    total_cars--;
}


void delete_a_car_from_cart(int engine_to_delete)
{
    int to_delete_index = search_a_cart_engine_index(engine_to_delete);
    for(int i = engine_to_delete; i < cars_in_cart; i++)
    {
        cart_cars[i] = cart_cars[i + 1];
        cart_engines[i] = cart_engines[i + 1];
    }
    cart_cars[cars_in_cart] = "";
    cart_engines[cars_in_cart] = 0;
    cars_in_cart--; 
}



void update_car_of_engine(int engine_to_update)
{
    int to_update_index = search_an_engine_index(engine_to_update);
    cout << "Company: ";
    getline(cin, companies[to_update_index]);
    cout << "Car model name: ";
    getline(cin, cars[to_update_index]);
    cout << "Engine capacity(cc): ";
    cin >> engines[to_update_index];
    cout << "Price: ";
    cin >> prices[to_update_index];
    cout << "Is automatic(1/0): ";
    cin >> is_automatic[to_update_index];
    cout << "Fuel - 1 for petrol, 2 for hybrid, 3 for electric: ";
    cin >> fuels[to_update_index];
}




bool car_exists_in_inventory(string search_car)
{
    bool car_exists = false;
    for(int i = 0; i <= total_cars; i++)
    {
        if(search_car == cars[i])
        {
            car_exists = true;
            break; // breaking out of the loop so that the car_engine_exists will not become false in the next iteration
        }
    }
    return car_exists;
}



bool engine_exists_in_inventory(int check_engine)
{
    bool exists = false;
    for(int i = 0; i <= total_cars; i++)
    {
        if(engines[i] == check_engine)
        {
            exists = true;
            break;
        }
    }
    return exists;
}


void add_to_cart(string enetered_car)
{
    bool car_engine_exists = false;
    int entered_engine_power;
    cout << "Enter engine power(cc): ";
    cin >> entered_engine_power;
    for(int i = 0; i <= total_cars; i++)
    {
        if(entered_engine_power == engines[i])
        {
            car_engine_exists = true;
            cart_cars[cars_in_cart] = cars[i];
            cart_engines[cars_in_cart] = engines[i]; // recording cart cars engines to create a unique way to access each car's details in the cart
            cart_total += prices[i];
            cars_in_cart++;
            break;  // breaking out of the loop so that the car_engine_exists will not become false in the next iteration
        }
    }
    if(car_engine_exists == false)
        cout << "Sorry, no such car is available." << endl;
}


void view_cart()
{
    int index, numbering = 1;
    cout << endl << endl << "Your Cart" << endl;
    cout << endl << endl << "\tCompany\t\tCar\t\tEngine(cc) \t\tType\t\t\tFuel\t\tPrice(PKR)" << endl << endl;
    for(int i = 0; i <= total_cars; i++)
    {
        for(int j = 0; j < cars_in_cart; j++)
        {
            if(cart_engines[j] == engines[i])
            {
                index = i;
                cout << numbering << "\t" << companies[i] << "\t\t" << cars[i] << "\t\t" << engines[i] << "\t\t\t"; 
                if(is_automatic[i] == true) // checking wether the car is automatic (type)
                    cout << "Automatic";
                else
                    cout << "Manual   ";
                cout << "\t\t";
                if(fuels[i] == 1)         // checking fuel type
                    cout << "Petrol     ";
                else if(fuels[i] == 2)
                    cout << "Hybrid     ";
                else if(fuels[i] == 3)
                    cout << "Electric   ";
                cout << "\t" << prices[i] << endl;
                numbering++;  
            }
        }
    }
    cout << endl << "Total amount: PKR " << cart_total << endl;
}




int count_cars(string search_car, string cars_array[], int array_size)
{
    int count = 0; 
    for(int i = 0; i < array_size; i++)
    {
        if(search_car == cars_array[i])
            count++;
    }
    return count;
}



void view_details_of_a_car(int index, int count)
{
    cout << count << "\t" << companies[index] << "\t\t" << cars[index] << "\t\t" << engines[index] << "\t\t\t"; 
    if(is_automatic[index] == true) // checking wether the car is automatic (type)
        cout << "Automatic";
    else
        cout << "Manual   ";
    cout << "\t\t";
    if(fuels[index] == 1)         // checking fuel type
        cout << "Petrol     ";
    else if(fuels[index] == 2)
        cout << "Hybrid     ";
    else if(fuels[index] == 3)
        cout << "Electric   ";
    cout << "\t" << prices[index] << endl;
}



bool engine_exists_in_cart(int engine)
{
    bool engine_exists = false;
    for(int i = 0; i < cars_in_cart; i++)
    {
        if(cart_engines[i] == engine)
        {
            engine_exists = true;
            break;
        }
    }
    return engine_exists;
}



bool car_exists_in_cart(string car)
{
    bool car_exists = false;
    for(int i = 0; i < cars_in_cart; i++)
    {
        if(cart_cars[i] == car)
        {
            car_exists = true;
            break;
        }
    }
    return car_exists;
}



void take_customer_info()
{
    string user_name, account_number, number, pin;
    cout << "Enter your name: ";
    getline(cin, user_name);
    customer_names[checkouts] = validate_string(user_name);
    cout << endl;

    cout << "Enter your phone number (11 digits): ";
    getline(cin, number);
    customer_no[checkouts] = validate_string_type_number(number, 11);
    cout << endl;

    cout << "Enter bank account number(16 digits): ";
    getline(cin, account_number);
    account_number = validate_string_type_number(account_number, 16);
    cout << endl;

    cout << "Enter PIN code(4 digits): ";
    getline(cin, pin);
    pin = validate_string_type_number(pin, 4);
    cout << endl;
}



void view_transactions()
{
    int local_total_earnings = 0;
    cout << endl;
    for(int i = 0; i < checkouts; i++)
    {
        cout << i + 1 << ". " << "Customer name:\t" << customer_names[i] << "\n   Phone number: \t" << customer_no[i] << "\n   Amount paid:  \t" << cart_totals[i] << endl << endl;
        local_total_earnings += cart_totals[i];
    }
    cout << endl << "Total earning: PKR " << local_total_earnings << endl;
}



void view_admins()
{
    string line;
    fstream file;
    file.open("admin_credentials.txt", ios::in);
    cout << endl;
    while(!file.eof())
    {
        getline(file, line);
        cout << "Name: " << parse_data(line, 1) << endl;
        cout << "Password: " << parse_data(line, 2) << endl << endl;
    }
    file.close();
}



bool admin_login_found(string entered_name, string entered_password)
{
    for(int i = 0; i < 5; i++)
    {
        if(entered_name == admin_names[i])
        {
            if(entered_password == admin_passwords[i])
                return true;
        }
    }
    return false;
}



void new_admin()
{
    bool comma_found = false;
    string name, password;
    cout << "SIGN UP" << endl;
    cout << "Enter name: ";
    getline(cin, name);
    name = validate_string(name);
    cout << "Enter password: ";
    getline(cin, password);
    for(int i = 0; password[i] == '\0'; i++)
    {
        if(password[i] == ',')
        {
            cout << "Password must not contain \",\"." << endl;
            comma_found = true;
            break;
        }
    }
    if(comma_found == false)
    {
        fstream file;
        file.open("admin_credentials.txt", ios::app);
        file << endl << name << "," << password;
        file.close();
    }
}



void load_inventory_arrays()
{
    int index = 0;
    string line = "";
    fstream file;
    file.open("records.txt", ios::in);
    while(!file.eof())
    {
        getline(file, line);
        companies[index] = parse_data(line, 1);
        cars[index] = parse_data(line, 2);
        engines[index] = stoi(parse_data(line, 3));
        is_automatic[index] = (bool)stoi(parse_data(line, 4));
        fuels[index] = stoi(parse_data(line, 5));
        prices[index] = stoi(parse_data(line, 6));
        index++; 
        // index is incremented even when the programs has read the last line from the file, so it is
        // 1 more than the actual number of cars
    }    
    file.close();
    total_cars = index - 1; // total_cars is always exactly equal to the total number of cars
}


void load_cart_related()
{
    int index = 0;
    string line = "";
    fstream file;
    file.open("cart.txt", ios::in);
    while(!file.eof())
    {
        getline(file, line);
        if(line.empty())
            continue;
        cart_cars[index] = parse_data(line, 1);
        cart_engines[index] = stoi(parse_data(line, 2));
        cart_total = stoi(parse_data(line, 3));
        index++;
        // index is incremented even when the programs has read the last line from the file, so it is
        // 1 more than the actual number of cars in cart
    }
    cars_in_cart = index; // cars_in_cart is always 1 ahead of the total no. of cars in cart
    file.close();
}


void load_transactions_arrays()
{
    int index = 0;
    string line = "";
    fstream file;
    file.open("transaction_history.txt", ios::in);
    while(!file.eof())
    {
        getline(file, line);
        if(line.empty())
            continue;
        customer_names[index] = parse_data(line, 1);
        customer_no[index] = parse_data(line, 2);
        cart_totals[index] = stoi(parse_data(line, 3));
        index++;
        // index is incremented even when the programs has read the last line from the file, so it is
        // 1 more than the actual number of checkouts
    }
    checkouts = index; // checkouts is always 1 ahead of the total no. of checkouts
    file.close();
}


void update_inventory_file()
{
    fstream file;
    file.open("records.txt", ios::out);
    file << companies[0] << "," << cars[0] << "," << engines[0] << "," << is_automatic[0] << "," << fuels[0] << "," << prices[0];
    for(int i = 1; i <= total_cars; i++)
    {
        file << endl << companies[i] << "," << cars[i] << "," << engines[i] << "," << is_automatic[i] << "," << fuels[i] << "," << prices[i];
    }
    file.close();
}


void update_cart_file()
{
    fstream file;
    file.open("cart.txt", ios::out);
    if(cars_in_cart == 0)
        file << "";
    else
    {
        file << cart_cars[0] << "," << cart_engines[0] << "," << cart_total;
        for(int i = 1; i < cars_in_cart; i++)
        {
            file << endl << cart_cars[i] << "," << cart_engines[i] << "," << cart_total;
        }
    }
    file.close();
}


void update_transactions_file()
{
    fstream file;
    file.open("transaction_history.txt", ios::out);
    if(checkouts == 0)
        file << "";
    else
    {
        file << customer_names[0] << "," << customer_no[0] << "," << cart_totals[0];
        for(int i = 1; i < checkouts; i++)
        {
            file << endl << customer_names[i] << "," << customer_no[i] << "," << cart_totals[i];
        }
    }
    file.close();
}


void load_admin_credentials()
{
    int index = 0;
    string line;
    fstream file;
    file.open("admin_credentials.txt", ios::in);
    while(getline(file, line))
    {
        admin_names[index] = parse_data(line, 1);
        admin_passwords[index] = parse_data(line, 2);
        index++;
    }
    file.close();
    admins = index;
}


void update_admin_credentials()
{
    fstream file;
    file.open("admin_credentials.txt", ios::out);
    for (int i = 0; i < admins; i++)
    {
        file << admin_names[i] << "," << admin_passwords[i];
        if (i < admins - 1)
        {
            file << endl; // Add a newline only if it's not the last admin
        }
    }
    file.close();
}


void delete_admin(string admin_name, string admin_password)
{
    int index = -1;

    // Find the index of the admin to delete
    for (int i = 0; i < admins; i++)
    {
        if (admin_name == admin_names[i] && admin_password == admin_passwords[i])
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        cout << "Admin not found." << endl;
        return;
    }

    // Shift elements to the left
    for (int i = index; i < admins - 1; i++)
    {
        admin_names[i] = admin_names[i + 1];
        admin_passwords[i] = admin_passwords[i + 1];
    }

    // Clear the last element
    admin_names[admins - 1] = "";
    admin_passwords[admins - 1] = "";

    // Decrement the count of admins
    admins--;
}


string parse_data(string line, int field)
{
    string word;
    int comma_count = 1;
    for(int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] == ',')
            comma_count++;
        else if(comma_count == field)
            word += line[i];
    }
    return word;
}



string validate_string_type_number(string number, int number_length)
{
    bool valid_input = false;
    while(valid_input == false)
    {
        int calculated_length = 0;
        bool all_nums = true;
        for(int i = 0; number[i] != '\0'; i++) // checking for any non-numeric input
        {
            if(number[i] != '1' && number[i] != '2' && number[i] != '3' && number[i] != '4' && number[i] != '5' && number[i] != '6' && number[i] != '7' && number[i] != '8' && number[i] != '9' && number[i] != '0')
            {
                all_nums = false;
                break;
            }  
        }
        if(all_nums == true)
        {
            for(int i = 0; number[i] != '\0'; i++) // calculating number length
            {
                calculated_length++;
            }
            if(calculated_length != number_length) // making sure if the number length is correct
            {
                cout << "Invalid number of digits. Try again: ";
                getline(cin, number);
                continue;
            }
            else
                valid_input = true;
        }
        else
        {
            cout << "Input should only contain digits. Try again: ";
            getline(cin, number);
        }
    }
    return number;
}


string validate_string(string line)
{
    bool valid_input = false;
    int ascii = 0;
    while(valid_input == false)
    {
        for(int i = 0; line[i] != '\0'; i++)
        {
            ascii = line[i];
            if((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90) || ascii == 32)
                valid_input = true;
            else
            {
                valid_input = false;
                break;
            }
        }

        if(valid_input == false)
        {
            cout << "Username should only contain letters. Try again: ";
            getline(cin, line);
        }
    }
    return line;
}


void app_title()
{
    system("cls");
    cout << endl << endl;
    cout << "\t ###  #   # ##### ##### ##   ## ##### ####  # #     #####        ####  #####  ###  #     ##### ####   ###  #   # # ####  " << endl;
    cout << "\t#   # #   #   #   #   # # # # # #   # #   # # #     #            #   # #     #   # #     #     #   # #     #   # # #   # " << endl;
    cout << "\t##### #   #   #   #   # #  #  # #   # ####  # #     ####         #   # ####  ##### #     ####  ####   ###  ##### # ####  " << endl;
    cout << "\t#   # #   #   #   #   # #     # #   # #   # # #     #            #   # #     #   # #     #     #   #     # #   # # #     " << endl;
    cout << "\t#   # #####   #   ##### #     # ##### ####  # ##### #####        ####  ##### #   # ##### ##### #   #  ###  #   # # #     " << endl << endl << endl;
}
