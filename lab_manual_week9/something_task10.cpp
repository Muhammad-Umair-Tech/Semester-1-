#include<iostream>
using namespace std;

string concatenate_something(string arguement);
int main()
{
    string arguement;
    cout << "Enter arguement: ";
    getline(cin, arguement);
    cout << concatenate_something(arguement);
    return 0;
}


string concatenate_something(string arguement)
{
    string line = "Something ";
    line += arguement;
    return line;
}