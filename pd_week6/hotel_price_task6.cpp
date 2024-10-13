#include<iostream> // task 6 cp
using namespace std;

float calculate_studio_cost(string month, int stays);
float calculate_apartment_cost(string month, int stays);
int main()
{
    string month;
    int stays;
    float studio_cost, apartment_cost;
    cout << "Enter the month of stay (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;
    studio_cost = calculate_studio_cost(month, stays);
    apartment_cost = calculate_apartment_cost(month, stays);
    if(apartment_cost == 0 || studio_cost == 0)
    {
        cout << "Wrong input";
    }
    else
    {
        cout << "Apartment: " << apartment_cost << endl;
        cout << "Studio: " << studio_cost << endl;  
    }
    return 0;
}



float calculate_apartment_cost(string month, int stays)
{
    float apartment_cost;
    if(month == "May" || month == "October")
        apartment_cost = stays * 65;
    else if(month == "June" || month == "September")
        apartment_cost = stays * 68.70;
    else if(month == "July" || month == "August")
        apartment_cost = stays * 77;
    else
        apartment_cost = 0;

    if(stays > 14)
        apartment_cost = apartment_cost * 0.90;
    return apartment_cost;
}


float calculate_studio_cost(string month, int stays)
{
    float studio_cost;
    if(month == "May" || month == "October")
    {
        studio_cost = stays * 50;        
        if(stays > 7 && stays <= 14)
            studio_cost = studio_cost * 0.95;
        else if(stays > 14)
            studio_cost = studio_cost * 0.70;
    }
    else if(month == "June" || month == "September")
    {
        studio_cost = stays * 75.20;
        if(stays > 14)
            studio_cost = studio_cost * 0.80;
    }
    else if(month == "July" || month == "August")
        studio_cost = stays * 76;
    else 
        studio_cost = 0;
    return studio_cost;
}