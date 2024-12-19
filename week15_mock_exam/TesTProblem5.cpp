#include<iostream>
#include<fstream>
using namespace std;

void write_numbers(string file_name);
void read_nums(int numbers[], string file_name);
void even_odd_sum(int numbers[], int size, string file_name);
int main()
{
    int numbers[10];
    write_numbers("data.txt");
    read_nums(numbers, "data.txt");
    even_odd_sum(numbers, 10, "even_odd_sums.txt");
    return 0;
}


void write_numbers(string file_name)
{
    fstream file;
    file.open(file_name, ios::out);
    file << 1;
    for(int num = 2; num < 11; num++)
    {
        file << endl << num;
    }
    file.close();
}

void read_nums(int numbers[], string file_name)
{
    string input;
    fstream file;
    file.open(file_name, ios::in);
    for(int i = 0; getline(file, input); i++)
    {
        numbers[i] = stoi(input);
    }
    file.close();
}

void even_odd_sum(int numbers[], int size, string file_name)
{
    int even_sum = 0, odd_sum = 0;
    fstream file;
    for(int i = 0; i < size; i++)
    {
        if(numbers[i] % 2 == 0)
            even_sum += numbers[i];
        else
            odd_sum += numbers[i];
    }
    file.open(file_name, ios::out);
    file << "Even sum: " << even_sum << endl;
    file << "Odd sum: " << odd_sum;
    file.close();
}