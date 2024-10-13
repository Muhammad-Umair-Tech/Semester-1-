#include<iostream>  // task 6 op
using namespace std;

float payable(string day, string month, float total);
int main()
{
    string day, month;
    float total;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the total amount: ";
    cin >> total;
    cout << "The payable amount after discount is " << payable(day, month, total);
    return 0;
}



float payable(string day, string month, float total)
{
    if(day == "Sunday" && month == "October" || month == "March" || month == "August")
        return total * 0.9;
    else 
        return total;
}