//task 6 cp

#include<iostream>
using namespace std;

string check_alphabet_case(char letter);
int main()
{
	char letter;
	string result;
	cout << "Enter a letter (A/a): ";
	cin >> letter;
	result = check_alphabet_case(letter);
	cout << result;
	return 0;
}



string check_alphabet_case(char letter)
{
	if(letter == 'a')
		return "You have entered your letter in lowercase.";
	else
		return "You have entered your letter in uppercase.";
	
}