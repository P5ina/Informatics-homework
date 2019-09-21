#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    if ((x * x + y * y) > 4 && y < x && y > 0 && x < 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
