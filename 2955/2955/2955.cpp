#include <iostream>

using namespace std;

int main()
{
	int a, b, h, result;
	cin >> h >> a >> b;
	result = h / (a - b) - b / (a - b);

    cout << result << "\n";
}
