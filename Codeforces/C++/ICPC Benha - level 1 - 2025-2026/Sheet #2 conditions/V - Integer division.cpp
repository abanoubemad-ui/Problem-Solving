#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n;
    }
    else
    {
        cout << 2 * n;
    }
    return 0;
}