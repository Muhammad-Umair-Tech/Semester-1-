#include<iostream>
using namespace std;

int main()
{
	int square_meters, width, height, walls, area;
	cout << "Number of square meters that can be painted: ";
	cin >> square_meters;
	cout << "Width of a single wall (in meters): ";
	cin >> width;
	cout << "Height of a single wall (in meters): ";
	cin >> height;
	area = height * width;
	cout << "Number of walls that can be painted: " << square_meters / area;
	return 0;
}