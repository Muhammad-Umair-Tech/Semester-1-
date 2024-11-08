#include<iostream>
using namespace std;

int main()
{
    string fruits[5] = {"peach", "apple", "guava", "watermellon"};
    int prices[5] = {60, 70, 40, 30};
    int amount, index, final_price;
    string fruit;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter th amount bought(kgs): ";
    cin >> amount;
    for(int i = 0; i < 4; i++)
    {
        if(fruits[i] == fruit)
            index = i;
    }
    final_price = amount * prices[index];
    cout << "Total price: Rs. " << final_price;
    return 0;
}