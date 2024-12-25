#include<iostream>
using namespace std;

string vowels_removed(string line);
int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);
    cout << vowels_removed(line);
    return 0;
}

string vowels_removed(string line)
{
    string no_vowels = "";
    for(int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] == 'a' || line[i] == 'A' || line[i] == 'e' || line[i] == 'E' || line[i] == 'i' || line[i] == 'I' || line[i] == 'o' || line[i] == 'O' || line[i] == 'u' || line[i] == 'U')
            continue;
        no_vowels += line[i];
    }
    return no_vowels;
}