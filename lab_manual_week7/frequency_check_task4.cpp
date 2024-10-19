#include<iostream>
using namespace std;

int calculate_digit_frequency(int num, int digit);
int total_digits(int num);
int main()
{
    int num, digit;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the digit to check: ";
    cin >> digit;
    cout << "Frequency: " << calculate_digit_frequency(num, digit);
    return 0;
}

int calculate_digit_frequency(int num, int digit)
{
    int frequency = 0;
    int places = total_digits(num);
    int place_no[places - 1];
    for(int i = 0; i < places; i++)
    {
        place_no[i] = num % 10;
        num = num / 10;
    }
    for(int j = places - 1; j >= 0; j--)
    {
        if(place_no[j] == digit)
            frequency++;
    }
    return frequency;
}

int total_digits(int num)
{
    int total_digits;
    if(num == 0)
        total_digits++;
    else
    {
        if(num < 0) // converting negative numbers into positive
            num = -num;
        while(num != 0)
        {
            total_digits++;
            num /= 10;
        }
    }
    return total_digits;
}