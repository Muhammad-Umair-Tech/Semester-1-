#include<iostream>
#include<cmath>
using namespace std;

int digit_sum(int num);
int calculate_digits(int num);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The sum of the digits of " << num << " is: " << digit_sum(num);
    return 0;
}


int digit_sum(int num)
{
    int sum = 0, places = calculate_digits(num);
    int place_no[places - 1];
    for(int i = 0; i < places; i++)
    {
        place_no[i] = num % 10;
        num /= 10;
    }
    for(int j = places - 1; j >= 0; j--)
    {
        sum += place_no[j];
    }
    return abs(sum);
}



int calculate_digits(int num)
{
    int digits = 0;
    if(num == 0)
        digits++;
    else
    {
        if(num < 0)
            num = -num;
        while(num != 0)
        {
            digits++;
            num /= 10;
        }
    }
    return digits;
}