#include<iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter size 1: ";
    cin >> size1;
    int nums1[size1];
    for(int i = 0; i < size1; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums1[i];
    }
    cout << "Enter size 2: ";
    cin >> size2;
    int nums2[size2];
    for(int i = 0; i < size2; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> nums2[i];
    }
    int size3 = size1 + size2;
    int nums3[size3];
    for(int i = 0; i < (size1 / 2); i++)
    {
        nums3[i] = nums1[i];
    }
    for(int i = 0; i < size2; i++)
    {
        nums3[(size1 / 2) + i] = nums2[i];
    }
    for(int i = (size1 / 2); i < size1; i++)
    {
        nums3[size2 + i] = nums1[i];
    }
    for(int i = 0; i < size3; i++) // displaying nums3
    {
        cout << nums3[i] << " ";
    }
    return 0;
}