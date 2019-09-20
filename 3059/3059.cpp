#include <iostream>

using namespace std;


int main()
{
	int n, curNum = 1;
	cin >> n;
	while (curNum <= n)
	{
		cout << curNum << " ";
		curNum *= 2;
	}
}