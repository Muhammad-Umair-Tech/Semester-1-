#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

void app_title();
string home_screen_choice();
string choice_customer();
string choice_admin();
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

int total_cars = 25; // cars num is has 0 inclusive
string companies[30] = {"Suzuki", "Toyota", "Kia", "Audi", "Suzuki", "Honda", "Honda", "Hyundai", "Hyundai", "Toyota", "Audi", "Audi", "BMW", "BMW", "Changan", "Changan", "Changan", "Suzuki", "Toyota", "Toyota", "Suzuki", "Audi", "Audi", "Audi", "Suzuki", "Honda"};
string cars[30] = {"Alto", "Corolla", "Elantra", "E-Tron", "Alto", "Civic", "City", "Sonata", "Tucson", "Aqua", "ETronGT", "Audi A4", "BMW i4", "BMW X7", "Alsvin", "Karvaan", "Alsvin", "Alto", "Corolla", "Corolla", "Alto", "E-Tron", "E-Tron", "E-Tron", "Alto", "Civic"};
int engines[30] = {658, 1700, 1580, 6030, 700, 1500, 1300, 2100, 2000, 1490, 9690, 1984, 5400, 2998, 1401, 998, 1399, 800, 1601, 1572, 531, 4949, 5005, 4999, 532, 1666};
bool is_automatic[30] = {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1};
int fuels[30] = {1, 1, 2, 3, 1, 1, 1, 1, 1, 2, 3, 1, 3, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 1, 1}; // 1: petrol 2: hybrid 3: electric
int prices[30] = {3000000, 7500000, 10000000, 51000000, 3500000, 10000000, 5400000, 11200000, 8130000, 6430000, 81000000, 35000000, 42000000, 29000000, 4710000, 3500000, 28000000, 4500000, 7410000, 7405000, 2800000, 48100000, 51100000, 50100000, 2900000, 13100000};
string cart_cars[30];
int cart_engines[30];
string customer_names[30];
string customer_no[30];
int cart_totals[30];
int cars_in_cart = 0; // car 1 has number 0
int checkouts = 0; // checkout 1 has number 0
int cart_total = 0, total_earnings = 0;

int main()
{
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
    cin >> choice;
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
        cin >> choice;
        if(choice == "1") // view inventory
            view_inventory();
        else if(choice == "2") // search cars
        {
            string search_car;
            int required_car_index;
            bool car_exists = false;
            cout << "Enter car name: ";
            cin >> search_car;
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
            cin >> enetered_car;
            if(car_exists_in_inventory(enetered_car) == true)
                add_to_cart(enetered_car);
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
            cin >> car_name;
            if(car_exists_in_cart(car_name))
            {
                cout << "Enter engine power: ";
                cin >> engine_to_delete;
                if(engine_exists_in_cart(engine_to_delete))
                    delete_a_car_from_cart(engine_to_delete);
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
            cout << "Thank you for your purchase!" << endl;
            for(int i = 0; i < cars_in_cart; i++)
            {
                cart_engine = cart_engines[i];
                delete_a_car_from_cart(cart_engine);
                delete_an_engine_from_inventory(cart_engine);
            }
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
    string entered_password, password = "123456";
    string entered_name, admin_name = "Umair";
    cout << "LOGIN" << endl;
    cout << "Enter name: ";
    cin >> entered_name;
    cout << "Enter password: ";
    cin >> entered_password;
    while(true)
    {
        if(entered_password == password && entered_name == admin_name)
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
            cout << "7. Back to home page" << endl;
            cout << "Choice: ";
            cin >> choice;
            if(choice == "1") // view inventory
                view_inventory();
            else if(choice == "2") // search a car
            {
                string search_car;
                int required_car_index;
                bool car_exists = false;
                cout << "Enter car name: ";
                cin >> search_car;
                if(car_exists_in_inventory(search_car))
                    car_searching_customer(search_car);
                else
                    cout << "Sorry, no such car is available." << endl;
            }
            else if(choice == "3") // add a car
                add_to_inventory();
            else if(choice == "4") // delete a car
            {
                string car_to_delete;
                int engine_to_delete;
                cout << "Enter car name: ";
                cin >> car_to_delete;
                if(car_exists_in_inventory(car_to_delete))
                {
                    cout << "Enter engine power: ";
                    cin >> engine_to_delete;
                    if(engine_exists_in_inventory(engine_to_delete))
                        delete_an_engine_from_inventory(engine_to_delete);
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
                cin >> car_to_update;
                if(car_exists_in_inventory(car_to_update))
                {
                    cout << "Enter the engine power of the car to edit: ";
                    cin >> engine_to_update;
                    if(engine_exists_in_inventory(engine_to_update))
                        update_car_of_engine(engine_to_update);
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
            else if(choice == "7") // back to home page
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
        cin >> companies[total_cars + 1];
        cout << "Car model name: ";
        cin >> cars[total_cars + 1];
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
    cin >> companies[to_update_index];
    cout << "Car model name: ";
    cin >> cars[to_update_index];
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
                cart_total += prices[i];
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
    string user_name, account_number, pin;
    cout << "Enter your name: ";
    cin >> customer_names[checkouts];
    cout << "Enter your phone number: ";
    cin >> customer_no[checkouts];
    cout << "Enter bank account number: ";
    cin >> account_number;
    cout << "Enter PIN code: ";
    cin >> pin;
    cart_totals[checkouts] = cart_total;
    total_earnings += cart_total;
    cart_total = 0;
    checkouts++;
}



void view_transactions()
{
    cout << endl << "\tCustomer Name\tPhone number\tAmount paid" << endl << endl;
    for(int i = 0; i < checkouts; i++)
    {
        cout << i + 1 << "\t" << customer_names[i] << "\t\t" << customer_no[i] << "\tPKR " << cart_totals[i] << endl;
    }
    cout << endl << "Total earning: PKR " << total_earnings << endl;
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
