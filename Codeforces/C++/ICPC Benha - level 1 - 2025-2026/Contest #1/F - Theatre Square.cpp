#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    long long n, m, a, out;
    cin >> n >> m >> a;
    out = (((n + a) - 1) / a) * (((m + a) - 1) / a);
    cout << out;
    return 0;
}