#include<iostream>
using namespace std;

int main()
{
    int size, total_time, unique_color;
    string already_counted;
    cout << "Enter the number of colors: ";
    cin >> size;
    string colors[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter color " << i + 1 << " : ";
        cin >> colors[i];
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if((colors[i] == colors[j]) && (colors[i] != already_counted))
            {
                unique_color++;
                already_counted = colors[i];
            }
        }
    }
    total_time = (size * 2) + (unique_color - 1); // we don't need to switch the last unique color pen
    cout << "Total time: " << total_time << " seconds";
    return 0;
}