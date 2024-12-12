#include<iostream>
#include<conio.h>
#include<windows.h>
#include<string>
#include<limits>
using namespace std;

int times_divided(int num, int base);
int count_digits(int num);
int count_hexa_digits(string hexa_num);
int powered(int base, int power);
int hexa_char_to_int(int hexa_char);
string int_to_hexa_string(int int_value);
int any_base_to_decimal(int base_num[], int size, int base);
void print_array(int array[], int size);
void print_char_array(string array[], int size);
int text_size(string text);
bool decrypt();
void title();

int main()
{
    bool binary_entered = false;
    bool decimal_entered = false;
    bool octal_entered = false;
    bool hexadecimal_entered = false;
    int num, input_base, base, index, q, size, num_copy, decimal = 0;
    string hexa_num;
    string message;
    int loop_limit = 1;
    int word_size = 0;
    int encryption_target;
    string choice;

    title();
    cout << "1. Encryption" << endl;
    cout << "2. Decryption" << endl;
    cout << "3. Conversion" << endl;
    cout << "Choice: ";
    cin >> choice;
    if(choice != "1" && choice != "2" && choice != "3")
    {
        cout << "Invalid input." << endl;
        cout << "Press any key to exit";
        return 0;
    }
    if(choice == "1") // encrypt
    {
        cout << "Enter text: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, message);
        cout << "Encryption target (2, 8, 16): ";
        cin >> encryption_target;
        if(encryption_target == 2)
        {
            decimal_entered = true;
            octal_entered = true;
            hexadecimal_entered = true;
        }
        else if(encryption_target == 8)
        {
            decimal_entered = true;
            binary_entered = true;
            hexadecimal_entered = true;
        }
        else if(encryption_target == 16)
        {
            decimal_entered = true;
            binary_entered = true;
            octal_entered = true;
        }
        else
        {
            cout << "Invalid input." << endl;
            cout << "Press any key to exit";
            getch();
            return 0;
        }
        word_size = text_size(message);
        loop_limit = word_size;
        input_base = 10;
    }
    int ascii[word_size];
    for(int i = 0; i < word_size; i++)
    {
        ascii[i] = message[i];
    }
    if(choice == "2") // decrypt
    {
        bool dont_stop_program;
        dont_stop_program = decrypt();
        if(dont_stop_program == false)
            return 0;
    }



    for(int i = 0; i < loop_limit; i++)
    {
        if(choice == "1")
        {
            num = ascii[i];
            size = count_digits(num);
        }
        else if(choice == "3")
        {
            cout << "Enter the base of the number you want to enter(2, 8, 10, 16): ";
            cin >> input_base;
            if(input_base != 2 && input_base != 8 && input_base != 10 && input_base != 16)
            {
                cout << "Invalid input" << endl;
                cout << "Press any key to exit";
                getch();
                return 0;
            }
            if(input_base != 16)
            {
                cout << "Enter the number: ";
                cin >> num; 
                size = count_digits(num);
            }
        }

        if(input_base == 10)
        {
            decimal_entered = true;
            decimal = num;
        }

        // if the user enters a number not in decimal, it needs to be converted to decimal first

        if(input_base == 2)
        {
            binary_entered = true;
            num_copy = num;
            int binary_num[size];
            for(int i = 0; i < size; i++) // converting binary into decimal and storing into binary_num array
            {
                binary_num[size - 1 - i] = num_copy % 2;
                num_copy /= 10;
            }
            decimal = any_base_to_decimal(binary_num, size, 2);
            input_base = 10;
        }
        else if(input_base == 8)
        {
            octal_entered = true;
            num_copy = num;
            int octal_num[size];
            for(int i = 0; i < size; i++)
            {
                octal_num[size - 1 - i] = num_copy % 10;
                num_copy /= 10;
            }
            decimal = any_base_to_decimal(octal_num, size, 8);
            input_base = 10;
        }
        else if(input_base == 16)
        {
            hexadecimal_entered = true;
            cout << "Enter hexadecimal digit: ";
            cin >> hexa_num;
            size = count_hexa_digits(hexa_num);
            int hexa_in_nums[size]; // hexa number is a string (char array), thus we need to convert it into integers
            for(int i = 0; i < size; i++)
            {
                hexa_in_nums[i] = hexa_char_to_int(hexa_num[i]);
            }
            decimal = any_base_to_decimal(hexa_in_nums, size, 16);
            input_base = 10;
        }

        /* at this point, the input has been converted to decimal, so now decimal version of the input is
        to be converted into the remaining bases */

        num = decimal;
        int array_size1 = times_divided(num, 2);
        int array_size2 = times_divided(num, 8);
        int array_size3 = times_divided(num, 16);
        int converted1[array_size1];
        int converted2[array_size2];
        string converted3[array_size3];

        if(binary_entered == false)
        {
            index = 0;
            base = 2;
            q = num;
            while(q != 0)
            {
                converted1[array_size1 - 1 - index] = q % base;
                q /= base;
                index++;
            }
        }
        if(octal_entered == false)
        {
            index = 0;
            base = 8;
            q = num;
            while(q != 0)
            {
                converted2[array_size2 - 1 - index] = q % base;
                q /= base;
                index++;
            }
        }
        if(hexadecimal_entered == false)
        {
            index = 0;
            base = 16;
            q = num;
            string value;
            int rem;
            while(q != 0)
            {
            // converted3[array_size3 - 1 - index] = num % base;
                rem = q % base;
                value = int_to_hexa_string(rem);
                converted3[array_size3 - 1 - index] = value;   
                q /= base;
                index++;
            }
        }

        // printing arrays containing converted versions of the input

        if(binary_entered == false)
        {
            if(choice == "3")
            {
                cout << endl << "Binary: ";
                print_array(converted1, array_size1);
            }
            else if(choice == "1")
                print_array(converted1, array_size1);
        }
        if(octal_entered == false)
        {
            if(choice == "3")
            {
                cout << endl << "Octal: ";
                print_array(converted2, array_size2);
            }
            else if(choice == "1")
                print_array(converted2, array_size2);
        }
        if(hexadecimal_entered == false)
        {
            if(choice == "3")
            {
                cout << endl << "Hexadecimal: ";
                print_char_array(converted3, array_size3);
            }
            else if(choice == "1")
                print_char_array(converted3, array_size3);
        }
        if(decimal_entered == false)
            cout << endl << "Decimal: " << decimal;
    }
    cout << endl << "Press any key to exit";
    getch();
    return 0;
}






int times_divided(int num, int base)
{
    int count = 0;
    int q = num;
    while(q != 0)
    {
        if(num < 0)
            num *= -1;
        q /= base;
        count++;
    }
    return count;
}


int count_digits(int num)
{
    int count = 0;
    if(num == 0)
        count++;
    while(num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}


int powered(int base, int power)
{
    int final_value = 1;
    for(int i = 1; i <= power; i++)
    {
        final_value *= base;
    }
    return final_value;
}


int count_hexa_digits(string hexa_num)
{
    int count = 0;
    for(int i = 0; hexa_num[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


int hexa_char_to_int(int hexa_char)
{
    int num;
    if(hexa_char == '1')
        num = 1;
    else if(hexa_char == '2')
        num = 2;
    else if(hexa_char == '3')
        num = 3;
    else if(hexa_char == '4')
        num = 4;
    else if(hexa_char == '5')
        num = 5;
    else if(hexa_char == '6')
        num = 6;   
    else if(hexa_char == '7')
        num = 7;
    else if(hexa_char == '8')
        num = 8;
    else if(hexa_char == '9')
        num = 9;
    else if(hexa_char == '0')
        num = 0;
    else if(hexa_char == 'A')
        num = 10;
    else if(hexa_char == 'B')
        num = 11;
    else if(hexa_char == 'C')
        num = 12;
    else if(hexa_char == 'D')
        num = 13;
    else if(hexa_char == 'E')
        num = 14;
    else if(hexa_char == 'F')
        num = 15; 
    return num;
}


string int_to_hexa_string(int int_value)
{
    string string_value;
    if(int_value == 10)
        string_value = "A";
    else if(int_value == 11)
        string_value = "B";
    else if(int_value == 12)
        string_value = "C";
    else if(int_value == 13)
        string_value = "D";
    else if(int_value == 14)
        string_value = "E";
    else if(int_value == 15)
        string_value = "F";
    else if(int_value == 0)
        string_value = "0";
    else if(int_value == 1)
        string_value = "1";
    else if(int_value == 2)
        string_value = "2";
    else if(int_value == 3)
        string_value = "3";
    else if(int_value == 4)
        string_value = "4";
    else if(int_value == 5)
        string_value = "5";
    else if(int_value == 6)
        string_value = "6";
    else if(int_value == 7)
        string_value = "7";
    else if(int_value == 8)
        string_value = "8";
    else if(int_value == 9)
        string_value = "9";
    return string_value;
}


int any_base_to_decimal(int base_num[], int size, int base)
{
    int decimal;
    for(int i = 0; i < size; i++)
    {
        decimal += (base_num[i] * powered(base, size - 1 - i));
    }
    return decimal;
}


void print_array(int array[], int size)
{

    for(int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << " ";
}


void print_char_array(string array[], int size)
{    
    for(int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << " "; 
}


int text_size(string text)
{
    int size;
    for(int i = 0; text[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}


bool decrypt()
{
    int decrypt_base;
    int to_decrypt_size = 0;
    int to_decrypt_decimal_size = 0;
    string hexa_to_decrypt;
    int hexa_strings;
    cout << "Enter base(2, 8, 16): ";
    cin >> decrypt_base;
    if(decrypt_base != 2 && decrypt_base != 8 && decrypt_base != 16)
    {
        cout << "Invalid input" << endl;
        cout << "Press any key to exit";
        getch();
        return 0;
    }

    if(decrypt_base != 16)
    {
        cout << "Enter the number of strings: ";
        cin >> to_decrypt_decimal_size;
        cout << "Enter the number of numbers in each string: ";
        cin >> to_decrypt_size;
        int to_decrypt[to_decrypt_size];
        int to_decrypt_decimal[to_decrypt_decimal_size];
        char decrypted[to_decrypt_decimal_size];
        for(int i = 0; i < to_decrypt_decimal_size; i++)
        {
            cout << "Enter string no " << i + 1 << ": " << endl;
            for(int j = 0; j < to_decrypt_size; j++)
            {
                cout << "Enter number " << j + 1 << " in string " << i + 1 << ": ";
                cin >> to_decrypt[j];
            }
            cout << "String " << i + 1 << ": ";
            print_array(to_decrypt, to_decrypt_size);
            cout << endl;
            to_decrypt_decimal[i] = any_base_to_decimal(to_decrypt, to_decrypt_size, decrypt_base);
            cout << "String " << i + 1 << " ASCII: " << to_decrypt_decimal[i] << endl;
            decrypted[i] = to_decrypt_decimal[i];
        }
        cout << endl << "Decrypted text: ";
        for(int i = 0; i < to_decrypt_decimal_size; i++)
        {
            cout << decrypted[i];
        }
    }
    else
    {
        cout << "Enter the number of hexa strings: ";
        cin >> hexa_strings;
        cout << "Enter the number of characters in each string: ";
        cin >> to_decrypt_decimal_size;

        int to_decrypt_decimal[hexa_strings];
        //  int decrypt_hexa_in_nums[to_decrypt_decimal_size];
        int hexa_in_nums[to_decrypt_decimal_size];
        char decrypted[hexa_strings];
        for(int j = 0; j < hexa_strings; j++)
        {
            cout << "Enter string " << j + 1 << ": ";
            cin >> hexa_to_decrypt;
            for(int k = 0; k < to_decrypt_decimal_size; k++)
            {
                hexa_in_nums[k] = hexa_char_to_int(hexa_to_decrypt[k]);
            }
            // convert hexa into decimal
            to_decrypt_decimal[j] = any_base_to_decimal(hexa_in_nums, to_decrypt_decimal_size, 16);
            decrypted[j] = to_decrypt_decimal[j];
        }
        cout << endl << "Decrypted text: ";
        for(int i = 0; i < hexa_strings; i++)
        {
            cout << decrypted[i];
        }
    }
    cout << endl << "Press any key to exit";
    getch();
    return 0;
}


void title()
{
    system("cls");
    cout << endl << endl;
    cout << "   #######  ##     ##    #####    #######    ##    ##  #######   ##########  ######   #########   ##     ##            ######   ##     ##  #######     " << endl;
    cout << "   ##       ###    ##  ##     ##  ##    ##   ##    ##  ##    ##      ##        ##    ##       ##  ###    ##           ##    ##  ###    ##  ##    ##    " << endl;
    cout << "   ##       ## #   ##  ##         ##    ##   ##    ##  ##    ##      ##        ##    ##       ##  ## #   ##           ##    ##  ## #   ##  ##    ##    " << endl;
    cout << "   #####    ##  #  ##  ##         #######     ######   #######       ##        ##    ##       ##  ##  #  ##           ########  ##  #  ##  ##    ##    " << endl;
    cout << "   ##       ##   # ##  ##         ##     ##     ##     ##            ##        ##    ##       ##  ##   # ##           ##    ##  ##   # ##  ##    ##    " << endl;
    cout << "   ##       ##    ###  ##     ##  ##     ##     ##     ##            ##        ##    ##       ##  ##    ###           ##    ##  ##    ###  ##    ##    " << endl;
    cout << "   #######  ##     ##    #####    ##     ##     ##     ##            ##      ######   #########   ##     ##           ##    ##  ##     ##  #######     " << endl;
    cout << "                                                                                                                                                       " << endl;
    cout << "                                                                                                                                                       " << endl;
    cout << "                       #####     #########   ##     ##  ##    ##  #######  #######     #####   ######   #########   ##     ##                          " << endl;
    cout << "                     ##     ##  ##       ##  ###    ##  ##    ##  ##       ##    ##   ##   ##    ##    ##       ##  ###    ##                          " << endl;
    cout << "                     ##         ##       ##  ## #   ##  ##    ##  ##       ##    ##     #        ##    ##       ##  ## #   ##                          " << endl;
    cout << "                     ##         ##       ##  ##  #  ##  ##    ##  ######   #######       #       ##    ##       ##  ##  #  ##                          " << endl;
    cout << "                     ##         ##       ##  ##   # ##  ##    ##  ##       ##     ##      #      ##    ##       ##  ##   # ##                          " << endl;
    cout << "                     ##     ##  ##       ##  ##    ###   ##  ##   ##       ##     ##  ##   ##    ##    ##       ##  ##    ###                          " << endl;
    cout << "                       #####     #########   ##     ##     ##     #######  ##     ##   #####   ######   #########   ##     ##                          " << endl << endl << endl;
}

/* sample input:
decimal = 24
binary = 11000
octal = 30
hexadecimal = 18*/
