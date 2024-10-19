#include<iostream>
using namespace std;

int main()
{
	float v_i, acceleration, time, v_f;
	cout << "Enter initial velocity (m/s): ";
	cin >> v_i;
	cout << "Enter acceleration (m/s^2): ";
	cin >> acceleration;
	cout << "Enter time (s): ";
	cin >> time;
	v_f = v_i + (acceleration * time);
	cout << "The final velocity is " << v_f << " (m/s^2).";
	return 0;
}