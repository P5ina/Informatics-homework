#include <iostream>

using namespace std;

int main()
{
	int n, prevNum = -1;
	bool hasDoubles = false;
	cin >> n;

	while (n > 0)
	{
		if (prevNum == n % 10)
		{
			hasDoubles = true;
		}
		prevNum = n % 10;
		n /= 10;
	}
	if (hasDoubles)
	{
		cout << "YES" << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}

	return 0;
}
