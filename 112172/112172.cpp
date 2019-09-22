#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;

	if (x >= 0 && y <= 1 && (y >= x - 1 || x * x + y * y <= 1))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

