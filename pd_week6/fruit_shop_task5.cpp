#include<iostream> // task 5 cp
using namespace std;

float total_price(string day, string fruit, int amount);
int main()
{
    string fruit, day;
    float price, total;
    int amount;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter fruit (banana, apple, orange, grapefruit, kiwi, pineapples, grapes): ";
    cin >> fruit;
    cout << "Enter amount: ";
    cin >> amount;
    total = total_price(day, fruit, amount);
    if(total == 0)
        cout << "Error: wrong input";
    else
        cout << total;
    return 0;
}

float total_price(string day, string fruit, int amount)
{
    float total = 0;
    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if(fruit == "banana")
            total = amount * 2.50;
        else if(fruit == "apple")
            total = amount * 1.20;
        else if(fruit == "orange")
            total = amount * 0.85;
        else if(fruit == "grapefruit")
            total = amount * 1.45;
        else if(fruit == "kiwi")
            total = amount * 2.70;
        else if(fruit == "pineapples")
            total = amount * 5.50;
        else if(fruit == "grapes")
            total = amount * 3.85;
        else
            total = 0;
    }
    else if(day == "Saturday" || day == "Sunday")
    {
        if(fruit == "banana")
            total = amount * 2.70;
        else if(fruit == "apple")
            total = amount * 1.25;
        else if(fruit == "orange")
            total = amount * 0.90;
        else if(fruit == "grapefruit")
            total = amount * 1.60;
        else if(fruit == "kiwi")
            total = amount * 3.0;
        else if(fruit == "pineapples")
            total = amount * 5.60;
        else if(fruit == "grapes")
            total = amount * 4.20;
        else
            total = 0;        
    }
    return total;
}