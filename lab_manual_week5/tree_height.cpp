//task 4 cp

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float distance, angle, height;
	cout << "Enter the distance from the tree: ";
	cin >> distance;
	cout << "Enter the angle of elevation: ";
	cin >> angle;
	angle = 0.01745 * angle;
	height = distance * tan(angle);
	cout << "Height of the tree: " << height;
	return 0;
}