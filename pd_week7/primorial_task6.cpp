#include<iostream>
using namespace std;

bool is_prime(int num);
int main()
{
    int amount, count = 0, product = 1;
    cout << "How many prime numbers do you want to multiply? ";
    cin >> amount;
    for(int i = 1; i <= 1000; i++) // 1000 is in itself a big limit as even before it is encountered, the product variable will have a value much greater than the range of int
    {
        if(is_prime(i))
        {
            product *= i;
            count++;
        }
        if(count == amount)
            break;
    }
    cout << product;
    return 0;
}



bool is_prime(int num)
{
    if(num <= 1)
        return false;
    else 
    {
        for(int i = 2; i < num; i ++)
        {
            if(num % i == 0)
                return false;
        }
        return true;
    }
}
