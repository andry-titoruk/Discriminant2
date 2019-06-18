#include <iostream> 
#include <cmath>
using namespace std;

int main()
{
	long long a;
	long long b;
	long long c;
	long long x;

	long long discriminant = sqrt(b * b - 4 * a * c);
	long long const2 = (2 * a);
	cout << "Enter a :\n//'a' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
	cin >> a;

	//check const2
	if (const2 == 0)
	{
		cout << "'a' can not equal '0'. (UNDEFINED BEHAVIOR)";//перепешите a
	}

	if (a > std::numeric_limits<int>::min() && a < std::numeric_limits<int>::max() )
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "'a' is not long long.\nIf you want to RESET 'a', please press 'r'.\nIf you want to QUIT, please press 'alt+F4'.\n" << endl;
			//перепишете a
				char r;
				r = getchar();
				if (r == 114) {
					cout << "Enter a :\n//'a' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
					cin >> a;
				}

			
	}


	cout << "Enter b: ";
	cin >> b;

	if (b > std::numeric_limits<int>::min() && b < std::numeric_limits<int>::max())
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "'b' is not long long.\nIf you want to RESET 'b', please press 'r'.\nIf you want to QUIT, please press 'alt+F4'.\n" << endl;
		//перепишете b
		char r;
		r = getchar();
		if (r == 114) {
			cout << "Enter b :\n//'b' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
			cin >> b;
		}
	}


	cout << "Enter c: ";
	cin >> c;

	if (c > std::numeric_limits<int>::min() && c < std::numeric_limits<int>::max())
	{
		cout << "OK" << endl;
	}
	else
	{
		cout << "'c' is not long long.\nIf you want to RESET 'c', please press 'r'.\nIf you want to QUIT, please press 'alt+F4'.\n" << endl;
		//перепишете c
		char r;
		r = getchar();
		if (r == 114) {
			cout << "Enter c :\n//'c' has to be > std::numeric_limits<int>::min() and < std::numeric_limits<int>::max()";
			cin >> c;
		}
	}



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