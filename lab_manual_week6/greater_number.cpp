#include<iostream>  // task 1 op
using namespace std;

bool greater_number(int num1, int num2);
int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << greater_number(num1, num2); 
    return 0;
}






bool greater_number(int num1, int num2)
{
    return (num1 > num2);
}