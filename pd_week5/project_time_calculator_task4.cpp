#include<iostream>
using namespace std;

int project_time_calculator(int days, int workers); // this function calculates the hours available
int main()
{
    int hours_required, hours_available, hours_additional, hours_left, workers, days;
    cout << "Enter the number of hours needed: ";
    cin >> hours_required;
    cout << "Enter the number of days that the firm has: ";
    cin >> days;
    cout << "Enter the total number of workers: ";
    cin >> workers;
    hours_available = project_time_calculator(days, workers);
    hours_additional = hours_required - hours_available;
    hours_left = hours_available - hours_required;
    if(hours_available > hours_required)
        cout << "Yes! " << hours_left << " hours left.";
    else
        cout << "Not enough time! " << hours_additional << " hours needed.";
    return 0;
}


int project_time_calculator(int days, int workers)
{
    int working_day = 9.2;
    int hours_per_day = working_day * workers;
    int total_time_available = hours_per_day * days;
    return total_time_available;
}
