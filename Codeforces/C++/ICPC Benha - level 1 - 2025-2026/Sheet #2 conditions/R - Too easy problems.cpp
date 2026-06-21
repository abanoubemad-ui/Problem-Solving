#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long x1, y1, r, x2, y2;
    cin >> x1 >> y1 >> r >> x2 >> y2;
    double d;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    if (d <= r)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}