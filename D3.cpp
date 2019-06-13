#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long a;
	long long b;
	long long c;
	long long x;

	cout << "Enter a: ";
	cin >> a;

	if (a < 56 && a > 0)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "'a' is not long long" << endl;
	}


	cout << "Enter b: ";
	cin >> b;
	
	if (b < 56 && b >0)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "'b' is not long long" << endl;
	}
	

	cout << "Enter c: ";
	cin >> c;

	if (c < 56 && c >0)
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "'c' is not long long" << endl;
	}


	//if discriminant > 0
	if ((b * b - 4 * a * c) > 0)
	{
		x = (-1 * b + sqrt((b * b - 4 * a * c))) / (2 * a);
		cout << "Discriminant > 0 ===> The first radical is " << x << endl;

		x = (-1 * b - sqrt((b * b - 4 * a * c))) / (2 * a);
		cout << "Discriminant > 0 ===> The second radical is " << x << endl;
	}
	else 
		//if discriminant = 0
		if ((b * b - 4 * a * c) == 0)
	    {
			x = (-1 * b) / (2 * a);
			cout << "Discriminant = 0 ===> Both radicals are " << x << endl;
	    }
	    //if discriminant < 0
	    else
	    {
		cout << "Discriminant < 0 ===> radicals are complex." << endl;
	    }

	return 0;
}