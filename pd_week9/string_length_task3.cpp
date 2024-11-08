#include<iostream>
using namespace std;

bool string_length(string word);
int main()
{
    string word;
    cout << "Enter a string: ";
    cin >> word;
    cout << string_length(word);
    return 0;
}

bool string_length(string word)
{
    bool result;
    int count = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    if(count % 2 == 0)
        result = true;
    else    
        result = false;
    return result;
}