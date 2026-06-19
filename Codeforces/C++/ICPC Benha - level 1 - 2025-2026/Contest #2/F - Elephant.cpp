#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    long long x = n / 5;
    if (n / 5 > x)
    {
        cout << x + 1;
    }
    else
    {
        cout << x;
    }
    return 0;
}