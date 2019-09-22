#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;

	if (x * x + y * y <= 1 && (y >= x || (y < x && x <= 0)))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

