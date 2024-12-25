#include<iostream>
using namespace std;

string jazzify(string chord);
int string_size(string word);
int main()
{
    int size;
    cout << "Enter the number of chords you want to jazzify: ";
    cin >> size;
    string chords[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter chord " << i + 1 << ": ";
        cin >> chords[i];
    }
    for(int i = 0; i < size; i++)
    {
        cout << jazzify(chords[i]) << " ";
    }
    return 0;
}

string jazzify(string chord)
{
    int chord_size = string_size(chord);
    if(chord[chord_size - 1] != '7')
        chord += '7';
    return chord;
}

int string_size(string word)
{
    int size = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}