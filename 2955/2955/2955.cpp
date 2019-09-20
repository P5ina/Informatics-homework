#include <iostream>

using namespace std;

int main()
{
	int a, b, h, result;
	cin >> h >> a >> b;
	result = (h - b - 1) / (a - b) + 1;
    cout << result << "\n";
}
