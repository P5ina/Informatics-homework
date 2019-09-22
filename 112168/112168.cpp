#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;

	if (y > x * x - 2 && (y <= 0 || (y > 0 && (y < x || y < -x))))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
