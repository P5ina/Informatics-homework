#include <iostream>

using namespace std;

int main()
{
	int v, t, result;
	cin >> v >> t;
	result = (t * v % 109 + 109) % 109;
	cout << result << "\n";
	return 0;
}