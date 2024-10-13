#include<iostream>  // task 5 op
using namespace std;

float payable(string day, string month, int total);
int main()
{
    string day, month;
    int total;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the total amount: ";
    cin >> total;
    cout << "The payable amount after discount is " << payable(day, month, total);
    return 0;
}



float payable(string day, string month, int total)
{
    if(day == "Sunday" && month == "October")
        return total * 0.9;
    else if(day == "Sunday")
        return total * 0.95;
    else 
        return total;
}