#include<iostream>
using namespace std;

int word_length(string word);
void next_letter(string word);
int main()
{
    int letters;
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    cout << "Reverse string: ";
    next_letter(word);
    return 0;
}

int word_length(string word)
{
    int count;
    for(int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}


void next_letter(string word)
{
    int letters = word_length(word);
    int ascii;
    for(int i = 0; word[i] != '\0'; i++)
    {
        ascii = word[i];
        ascii++;
        word[i] = ascii;
        cout << word[i];
    }
}