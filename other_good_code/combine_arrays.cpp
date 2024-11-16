#include<iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter size 1: ";
    cin >> size1;
    int numbers1[size1];
    for(int i = 0; i < size1; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers1[i];
    }
    cout << "Enter size 2: ";
    cin >> size2;
    int numbers2[size2];
    for(int i = 0; i < size2; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers2[i];
    }
    int size3 = size1 + size2;
    int numbers3[size3];
    for(int i = 0; i < size1; i++)
    {
        numbers3[i] = numbers1[i];
    }
    for(int i = 0; i < size2; i++)
    {
        numbers3[i + size1] = numbers2[i];
    }
    for(int i = 0; i < size3; i++)
    {
        cout << numbers3[i] << " ";
    }
}