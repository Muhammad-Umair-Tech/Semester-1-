#include<iostream>
using namespace std;

int main()
{
	float current, voltage, power;
	cout << "Enter current (in amperes): ";
	cin >> current;
	cout << "Enter voltage (in volts): ";
	cin >> voltage;
	power = current * voltage;
	cout << "Power = " << power << " watts";
	return 0;
}