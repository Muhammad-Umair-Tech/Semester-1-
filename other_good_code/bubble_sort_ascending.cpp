#include<iostream>
using namespace std;

int main()
{
    int lim;
    cout << "Enter the number of digits you want to compare: ";
    cin >> lim;
    int a[lim];
    for(int b = 0; b < lim; b++) // getting numbers
    {
        cout << "Enter number: ";
        cin >> a[b];
    }
    for(int i = 0; i < lim; i++) // arranging in ascending order through bubble sort
    {
        for(int j = 0; j < lim - i - 1; j++) // lim - i to not to move already sorted elements at the end of the array
        {                                    // lim - i - 1 to have a free slot to move elements around
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for(int k = 0; k < lim; k++) // displaying the sorted numbers
    {
        cout << a[k] << endl;
    }
}