//Prints Hassan horizontallyvertically
#include<iostream>
using namespace std;

void printH();
void printA();
void printS();
void printS();
void printA();
void printN();
main()
{
	printH();
	printA();
	printS();
	printS();
	printA();
	printN();
}





void printH()
{
	cout << "#   #" << endl;
	cout << "#   #" << endl;
	cout << "#####" << endl;
	cout << "#   #" << endl;
	cout << "#   #" << endl << endl << endl;
}

void printA()
{
	cout << " ###" << endl;
	cout << "#   #" << endl;
	cout << "#####" << endl;
	cout << "#   #" << endl;
	cout << "#   #" << endl << endl << endl;
}

void printS()
{
	cout << " ###" << endl;
	cout << "#    " << endl;
	cout << " ### " << endl;
	cout << "    #" << endl;
	cout << " ### " << endl << endl << endl;
}

void printN()
{
	cout << "#   #" << endl;
	cout << "##  #" << endl;
	cout << "# # #" << endl;
	cout << "#  ##" << endl;
	cout << "#   #" << endl << endl << endl;
}