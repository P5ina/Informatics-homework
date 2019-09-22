#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;

	if (x * x + y * y < 1 || (x > 0 && x < 1 && y > 0 && y < 1))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

