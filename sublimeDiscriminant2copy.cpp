#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double x;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;

	cout << "Enter c: ";
	cin >> c;


	//if discriminant > or = 0
	if ((b * b - 4 * a * c) >= 0) 
	{
		x = (-1 * b + sqrt((b * b - 4 * a * c))) / (2 * a);
		cout << "The first radical is " << x << endl;

		x = (-1 * b - sqrt((b * b - 4 * a * c))) / (2 * a);
		cout << "The second radical is " << x << endl;
	}
	else
	{
		cout << "Discriminant < 0 ===> radicals are complex." << endl;
	}

	return 0;
}
