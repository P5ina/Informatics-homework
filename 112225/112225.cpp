#include <iostream>

using namespace std;

int main()
{
	int a, n, numSum  = 1;
	cin >> a >> n;
	for (int i = 0; i < n; i++)
	{
		numSum *= a;
	}
    cout << numSum << "\n";
}