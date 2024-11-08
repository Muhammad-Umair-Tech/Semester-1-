#include<iostream>
using namespace std;

void common_characters(string word1, string word2, int size);
int main()
{
    int size;
    string word1, word2;
    cout << "Enter the number of characters in each string: ";
    cin >> size;
    cout << "Enter string 1: ";
    cin >> word1;
    cout << "Enter string 2: ";
    cin >> word2;
    common_characters(word1, word2, size);
    return 0;
}

void common_characters(string word1, string word2, int size)
{
    char already_found;
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if((word1[i] == word2[j]) && (word1[i] != already_found))
            {
                already_found = word1[i];
                count++;
                cout << word1[i] << " ";
            }        
        }
    }
    cout << endl << "There are " << count << " common elements.";
}