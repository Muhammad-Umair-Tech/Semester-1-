#include<iostream>
using namespace std;

int primorial(int n);
bool is_prime(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << primorial(n);
    return 0;
}





bool is_prime(int n)
{
    if(n <= 1)
        return false;
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
}


int primorial(int n)
{
    int number_primorial;
    if(n == 1)
        number_primorial = 1;
    else if(is_prime(n))
        number_primorial = n * primorial(n - 1);
    else
        return primorial(n - 1);
    return number_primorial;
}