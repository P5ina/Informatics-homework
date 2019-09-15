#include <iostream>

using namespace std;

int main()
{
	int v, t, result;
	cin >> v >> t;
	result = t * v % 109;
	if (result < 0)
	{
		result = 109 + result;
	}
	cout << result;
	return 0;
}