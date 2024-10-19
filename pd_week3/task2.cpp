#include<iostream>
using namespace std;

int main()
{
	int frames, minutes, total;
	cout << "Number of minutes: ";
	cin >> minutes;
	cout << "Number of frames per second (FPS): ";
	cin >> frames;
	total = frames * minutes * 60;
	cout << "The total number of frames is " << total;
	return 0;

}