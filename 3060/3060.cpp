#include <iostream>

using namespace std;


int main()
{
	int n, curNum = 1;
	bool isSquare = false;
	cin >> n;
	while (curNum <= n)
	{
		if (n == curNum)
		{
			isSquare = true;
		}
		curNum *= 2;
	}
	if (isSquare)
	{
		cout << "YES" << "\n";
	}
	else
	{
		cout << "NO" << "\n";
	}
}
