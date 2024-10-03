//task 5 cp

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	float discriminant, root_a, root_b;
	cout << "Enter the coefficient of the quadratic term: ";
	cin >> a;
	cout << "Enter the coefficient of the linear term: ";
	cin >> b;
	cout << "Enter the constant term: ";
	cin >> c;
	discriminant = (b * b) - (4 * a * c);
	if(discriminant == 0)
	{
		root_a = -b / (2 * a);
		cout << "Both roots are equal: " << root_a;
	}
	if(discriminant < 0)
	{
		root_a = -b / (2 * a); //root_a calculates the real part
		root_b = (sqrt(-((b * b) - (4 * a * c)))) / (2 * a); //root_b calculates the imaginary part
		//both roots have the same real and imaginary parts; they are just the conjugates of one another
		cout << "Complex solutions for roots: " << root_a << " + " << root_b << "i , " << root_a << " - " << root_b << "i"; 
	}
	if(discriminant  > 0)
	{
		root_a = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a); //the first root
		root_b = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a); //the second root
		cout << "Solutions for roots: " << root_a << " , " << root_b;
	}
	return 0;
}