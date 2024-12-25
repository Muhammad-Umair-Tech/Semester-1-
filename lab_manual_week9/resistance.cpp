#include<iostream>
using namespace std;

float total_resistance(float resistances[], int size);
int main()
{
    int size;
    float total;
    cout << "Enter the number of resistances: ";
    cin >> size;
    float resistances[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter resistance " << i + 1 << ": ";
        cin >> resistances[i];
    }
    total = total_resistance(resistances, size);
    cout << total << " ohms";
    return 0;
}


float total_resistance(float resistances[], int size)
{
    float sum;
    for(int i = 0; i < size; i++)
    {
        sum += resistances[i];
    }
    return sum;
}