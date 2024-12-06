#include<iostream>
#include<fstream>
using namespace std;

void split(string line, string words[], char spliting_char);
int count_words(string line);
int main()
{
    string line = "Hello world I am loving it! ";
    int no_of_words = count_words(line);
    string words[no_of_words];
    char spliting_char = 'o';
    split(line, words, spliting_char);

    for(int i = 0; i < no_of_words; i++)
    {
        cout << words[i] << " ";
    }
    return 0;
}


void split(string line, string words[], char spliting_char)
{
    int idx = 0;
    string current_word = "";
    for(int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] != spliting_char)
        {
            current_word += line[i];
        }
        else
        {
            words[idx] = current_word;
            current_word = "";
            idx++;
        }
    }
    if(current_word != "")
    {
        words[idx] = current_word;
    }
}


int count_words(string line)
{
    int count;
    for(int i = 0; line[i] != '\0'; i++)
    {
        if(line[i] == ' ')
            count++;
    }
    count++; // count the last word
    return count;
}