#include<iostream>  // task 12 cp
using namespace std;

float total_income(string screening, int rows, int columns);
int main()
{
    string screening;
    int rows, columns;
    cout << "Enter the type of screening (Premiere/Normal/Discount): ";
    cin >> screening;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << "The total income is: " << total_income(screening, rows, columns);
    return 0;
}




float total_income(string screening, int rows, int columns)
{
    if(screening == "Premiere")
        return rows * columns * 12.00;
    else if(screening == "Normal")
        return rows * columns * 7.50;
    else if(screening == "Discount")
        return rows * columns * 5.00;
    else   
        return 0;
}