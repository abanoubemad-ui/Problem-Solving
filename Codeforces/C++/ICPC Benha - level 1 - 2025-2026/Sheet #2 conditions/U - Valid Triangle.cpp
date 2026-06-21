#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double t = a + b + c;
    if (a > 0 && b > 0 && c > 0 && t == 180)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}