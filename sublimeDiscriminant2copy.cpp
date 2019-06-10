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

/*#include <iostream>
#include <cmath>

double a; double b; double c;

double discriminant(a,b,c)
{
	return ((b * b)) - (4 * a) * c;
};

double x1(a,b,c)
{
	return ((    -b + std::sqrt(    discriminant()    )    )) / (2 * a);
};

double x2(a,b,c)
{
	return ((    -b - std::sqrt(    discriminant()    )    )) / (2 * a);
};

int main()
{
	std::cout << "Enter 'a'" << std::endl;
	std::cin >> a;


	std::cout << "Enter 'b'" << std::endl;
	std::cin >> b;


	std::cout << "Enter 'c'" << std::endl;
	std::cin >> c;

	if (discriminant(a,b,c) > 0)
	{
		std::cout << "X1 == ", x1(a,b,c) << std::endl;
		std::cout << "X2 == ", x2(a,b,c) << std::endl;
	}
	return 0;
}*/