#include <iostream>

using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;

	if (x * x + y * y <= 1 && (x >= 0 || (x < 0 && (x >= y || -x <= y))))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

