#include<iostream>
#include<fstream>
using namespace std;

void write_nums_to_file(string file_name);
void perform_calc_in_file(double nums[], string file_name);
int main()
{
    string input_file = "input_file.txt";
    string output_file = "output_file.txt";
    string input;
    int index = 0;
    double nums[2];
    write_nums_to_file(input_file);
    fstream file;
    file.open("input_file.txt", ios::in);
    while(getline(file, input))
    {
        nums[index] = stof(input);
        index++;
    }
    file.close();
    perform_calc_in_file(nums, output_file);
    return 0;
}


void write_nums_to_file(string file_name)
{
    fstream file;
    double num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    file.open(file_name, ios::out);
    file << num1 << endl << num2;
    file.close();
}


void perform_calc_in_file(double nums[], string file_name)
{
    fstream file;
    file.open(file_name, ios::out);
    file << nums[0] + nums[1] << endl;
    file << nums[0] - nums[1] << endl;
    file << nums[0] * nums[1] << endl;
    file << nums[0] / nums[1];
    file.close();
}