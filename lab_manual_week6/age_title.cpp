#include<iostream>
using namespace std;

string check_title(char gender, int age);
int main()
{
    char gender;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
    cout << "Your personal title is: " << check_title(gender, age);
    return 0;
}




string check_title(char gender, int age)
{
    if(age >= 16 && gender == 'm')
        return "Mr.";
    else if(age < 16 && gender == 'm')
        return "Master";
    else if(age >= 16 && gender == 'f')
        return "Ms.";
    else if(age < 16 && gender == 'f')
        return "Miss";
    else
        return "Wrong input";
}