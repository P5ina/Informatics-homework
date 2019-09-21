#include <iostream>

using namespace std;

int main()
{
	int n, prevNum;
	bool isRepeats = true;
	cin >> n;

	prevNum = n % 10;

	while (n > 0)
	{
		if (prevNum != n % 10)
		{
			isRepeats = false;
		}
		prevNum = n % 10;
		n /= 10;
	}
	if (isRepeats)
	{
		cout << "YES" << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}

	return 0;
}
