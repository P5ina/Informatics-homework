#include <iostream>

using namespace std;

int main()
{
	int a, b, c, maxNum;
	cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		maxNum = a;
	}
	else if (b >= c && b >= a)
	{
		maxNum = b;
	}
	else
	{
		maxNum = c;
	}

    cout << maxNum << "\n";
}

