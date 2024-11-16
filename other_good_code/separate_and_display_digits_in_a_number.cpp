#include<iostream> // this program displays the digit at each place for a number
using namespace std;

int total_digits(int num);
void print_digits(int num);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    print_digits(num);
}

void print_digits(int num)
{
    int places = total_digits(num);
    int place_no[places - 1];
    for(int i = 0; i < places; i++)
    {
        place_no[i] = num % 10;
        num = num / 10;
    }
    for(int j = places - 1; j >= 0; j--)
    {
        cout << place_no[j] << endl;
    }
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