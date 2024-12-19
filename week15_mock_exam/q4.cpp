#include<iostream>
#include<fstream>
using namespace std;

void write_nums(string file_name);
void read_nums(int nums[], string file_name);
void write_squares(int nums[], int size, string file_name);
int main()
{
    int nums[5];
    write_nums("numbers.txt");
    read_nums(nums, "numbers.txt");
    write_squares(nums, 5, "squares.txt");
    return 0;
}


void write_nums(string file_name)
{   
    fstream file;
    file.open(file_name, ios::out);
    file << 1;
    for(int num = 2; num <= 5; num++)
    {
        file << endl << num;
    }
    file.close();
}


void read_nums(int nums[], string file_name)
{
    string input;
    int index = 0;
    fstream file;
    file.open("numbers.txt", ios::in);
    while(getline(file, input))
    {
        nums[index] = stoi(input);
        index++;
    }
    file.close();
}


void write_squares(int nums[], int size, string file_name)
{
    fstream file;
    file.open(file_name, ios::out);
    file << nums[0] * nums[0];
    for(int i = 1; i < size; i++)
    {
        file << endl << nums[i] * nums[i];
    }
    file.close();
}