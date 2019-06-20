#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
	long long a;
	long long b;
	long long c;
	long long x;


	cout << "Enter a :\n//'a' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()   (EXCEPT 0!!!)";
	cin >> a;

	long long const2 = (2 * a);

	//check a
	while (a < std::numeric_limits<int>::min() ||a == 0 || a > std::numeric_limits<int>::max())
	{
		cout << "'a' is not long long or equals '0'.\nReset 'a'." << endl;
		cout << "Enter a :\n//'a' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
		cin >> a;
	}



	cout << "Enter b: ";
	cin >> b;

	//check b
	while (b < std::numeric_limits<int>::min() || b > std::numeric_limits<int>::max())
	{
		cout << "'b' is not long long.\nReset 'b'." << endl;
		cout << "Enter b :\n//'b' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
		cin >> b;
	}


	cout << "Enter c: ";
	cin >> c;

	while (c < std::numeric_limits<int>::min() || c > std::numeric_limits<int>::max())
	{
		cout << "'c' is not long long.\nReset 'c'." << endl;
		cout << "Enter c :\n//'c' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
		cin >> c;
	}



	long long discriminant = sqrt(b * b - 4 * a * c);


	if (discriminant > 0)
	{
		x = (-1 * b + discriminant) / const2;
		cout << "Discriminant > 0 ===> The first radical is: " << x << endl;

		x = (-1 * b - discriminant) / const2;
		cout << "Discriminant > 0 ===> The second radical is: " << x << endl;
	}
	else
		if (discriminant == 0)
		{
			x = (-1 * b) / (2 * a);
			cout << "Discriminant = 0 ===> Both radicals are: " << x << endl;
		}
	//if discriminant < 0
		else
		{
			cout << "Discriminant < 0 ===> radicals are complex.  (UNDEFINED BEHAVIOR)" << endl;
		}

	return 0;
}