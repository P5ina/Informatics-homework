#include <iostream>

using namespace std;

int main()
{
	int n, numSum = 1;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		numSum *= i;
	}
    cout << numSum << "\n";
}
