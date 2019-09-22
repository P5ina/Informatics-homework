#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;

	if (x <= 1 && y >= 1 - x && (x >= 0 || (x < 0 && y > 2 * x * x)))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

