#include<iostream>
using namespace std;

int main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string movie;
    int index, price = 500;
    cout << "Enter movie name: ";
    cin >> movie;
    for(int i = 0; i < 5; i++)
    {
        if(movies[i] == movie)
            index = i;
    }  
    if(index % 2 == 0)
        price = 500 * 0.9;
    else
        price = 500 * 0.95;
    cout << "Price: Rs. " << price; 
    return 0;
}