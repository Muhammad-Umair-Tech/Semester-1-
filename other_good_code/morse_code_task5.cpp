#include<iostream>
#include<fstream>
using namespace std;

void morse_code(string file_name);
int main()
{
    string file_name, message;
    cout << "Enter the name of the file containing the message: ";
    getline(cin, file_name);
    cout << "Enter the message: ";
    getline(cin, message);
    fstream file;
    file.open(file_name, ios::out);
    file << message;
    file.close();
    morse_code(file_name);
    return 0;
}


void morse_code(string file_name)
{
    string message;
    fstream file;
    file.open(file_name, ios::in);
    getline(file, message);
    file.close();
    file.open("morse_c", ios::out);
    for(int i = 0; message[i] != '\0'; i++)
    {
        if(message[i] == 'A' || message[i] == 'a')
            file << ".-";
        else if(message[i] == 'B' || message[i] == 'b')
            file << "-...";
        else if(message[i] == 'C' || message[i] == 'c')
            file << "-.-.";
        else if(message[i] == 'D' || message[i] == 'd')
            file << "-..";
        else if(message[i] == 'E' || message[i] == 'e')
            file << ".";
        else if(message[i] == 'F' || message[i] == 'f')
            file << "..-.";
        else if(message[i] == 'G' || message[i] == 'g')
            file << "--.";
        else if(message[i] == 'H' || message[i] == 'h')
            file << "....";
        else if(message[i] == 'I' || message[i] == 'i')
            file << "..";
        else if(message[i] == 'J' || message[i] == 'j')
            file << ".---";
        else if(message[i] == 'K' || message[i] == 'k')
            file << "-.-";
        else if(message[i] == 'L' || message[i] == 'l')
            file << ".-..";
        else if(message[i] == 'M' || message[i] == 'm')
            file << "--";
        else if(message[i] == 'N' || message[i] == 'n')
            file << "-.";
        else if(message[i] == 'O' || message[i] == 'o')
            file << "---";
        else if(message[i] == 'P' || message[i] == 'p')
            file << ".--.";
        else if(message[i] == 'Q' || message[i] == 'q')
            file << "--.-";
        else if(message[i] == 'R' || message[i] == 'r')
            file << ".-.";
        else if(message[i] == 'S' || message[i] == 's')
            file << "...";
        else if(message[i] == 'T' || message[i] == 't')
            file << "-";
        else if(message[i] == 'U' || message[i] == 'u')
            file << "..-";
        else if(message[i] == 'V' || message[i] == 'v')
            file << "...-";
        else if(message[i] == 'W' || message[i] == 'w')
            file << ".--";
        else if(message[i] == 'X' || message[i] == 'x')
            file << "-..-";
        else if(message[i] == 'Y' || message[i] == 'y')
            file << "-.--";
        else if(message[i] == 'Z' || message[i] == 'z')
            file << "--..";
        else if(message[i] == ' ')
            file << "-.-.-.-";
        file << " ";
    }
    file.close();
}

