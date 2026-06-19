#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << n;
    }
    else
    {
        cout << m;
    }
    return 0;
}