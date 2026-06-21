#include <iostream>
using namespace std;

int main()
{
    long long n, t, f;
    cin >> n;
    t = (n % 100) / 10;
    f = n % 10;
    cout << f + t;
    return 0;
}