#include<iostream>
using namespace std;

float calculate_final_price(char vehicle_code, float vehicle_price);
int main()
{
    char vehicle_code;
    float vehicle_price, final_price;
    cout << "Enter the vehicle type code (M, E ,S, v, T): ";
    cin >> vehicle_code;
    cout << "Enter the vehicle price: $";
    cin >> vehicle_price;
    final_price = calculate_final_price(vehicle_code, vehicle_price);
    cout << "The final price of vehicle " << vehicle_code << " after adding tax is: $" << final_price;
    return 0;
}


float calculate_final_price(char vehicle_code, float vehicle_price)
{
    float tax_rate, final_price, tax_amount;
    if(vehicle_code == 'M')
        tax_rate = 6;
    else if(vehicle_code == 'E')
        tax_rate = 8;
    else if(vehicle_code = 'S')
        tax_rate = 10;
    else if(vehicle_code = 'V')
        tax_rate = 12;
    else if(vehicle_code = 'T')
        tax_rate = 15;
    tax_amount = (vehicle_price * tax_rate) / 100;
    final_price = vehicle_price + tax_amount;
    return final_price;
}