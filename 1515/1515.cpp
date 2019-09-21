#include <iostream>

using namespace std;

int main()
{
	int n, numSum = 0;
	cin >> n;

	while (n > 0)
	{
		numSum += n % 10;
		n /= 10;
	}
	cout << numSum << "\n";
	
	return 0;
}
