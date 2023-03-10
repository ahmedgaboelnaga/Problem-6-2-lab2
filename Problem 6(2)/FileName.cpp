#include<iostream>

using namespace std;

int main()
{
	int x, y, z;

	cout << "Enter the 3 sides of the triangle: \n";
	cin >> x >> y >> z;

	if (x == y && y == z)
	{
		cout << "The triangle is equilateral.";
	}
	else if (x == y || y == z || x == z)
	{
		cout << "The triangle is iscoceles.";
	}
	else
	{
		cout << "The triangle is different.";
	}

	//return 0;
}