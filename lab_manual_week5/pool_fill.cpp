#include<iostream> // task 11 cp
using namespace std;

void calculate_pool_state(float volume, float pipe1, float pipe2, float hours);
int main()
{
    float pipe1, pipe2, volume, hours;
    cout << "Enter the volume of the pool in liters: ";
    cin >> volume;
    cout << "Enter the flow rate of the first pipe per hour: ";
    cin >> pipe1;
    cout << "Enter the flow rate of the second pipe per hour: ";
    cin >> pipe2;
    cout << "Enter the hours for which the worker was absent: ";
    cin >> hours;
    calculate_pool_state(volume, pipe1, pipe2, hours);
    return 0;
}




void calculate_pool_state(float volume, float pipe1, float pipe2, float hours)
{
    float pipe1_water = pipe1 * hours, pipe2_water = pipe2 * hours; 
    float water_volume = pipe1_water + pipe2_water;
    int percent_full = (water_volume / volume) * 100; 
    int percent_pip1_water = (pipe1_water / water_volume) * 100;
    int percent_pipe2_water = (pipe2_water / water_volume) * 100;
    float overflow = water_volume - volume;
    if(water_volume > volume)
        cout << "For " << hours << " hours, the pool overflows " << overflow << " liters.";
    else
        cout << "The pool is " << percent_full << "% full.\nPipe 1: " << percent_pip1_water << "%\nPipe 2: " << percent_pipe2_water << "%";
    
}