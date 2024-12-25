#include<iostream>
using namespace std;

int word_length(string word);
void reverse_word(string word);
int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    cout << "Reverse word: ";
    reverse_word(word);
    return 0;
}

void reverse_word(string word)
{
    string reverse_word;
    int no_of_letters = word_length(word);
    for(int i = no_of_letters; i >= 0; i--)
    {
        reverse_word[no_of_letters - i] = word[i]; 
        cout << reverse_word[no_of_letters - i];
    }
}


int word_length(string word)
{
    int count = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}