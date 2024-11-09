#include<iostream>
using namespace std;

int main()
{
    int n, org_i;
    cout << "Enter a number: ";
    cin >> n;
    for(int i = 1111; i <= 9999; i++)
    {
        org_i = i;
        bool divisible_i = false;
        for(int j = 0; j < 4; j++) // total digits in i are always 4
        {
            int denom = i % 10;
            i /= 10;
            if(denom == 0)
            {
                divisible_i = false;
                break;
            }
            if(n % denom == 0)
                divisible_i = true;
            else
            {
                divisible_i = false;
                break;
            }    
        }
        if(divisible_i == true)
            cout << org_i << " ";
        i = org_i;
    }
    return 0;
}
