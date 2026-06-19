#include <iostream>
using namespace std;

int main()
{
    long long n, m, x;
    cin >> n >> m;
    x = n / m;
    if (x % 2 == 0)
    {
        cout << "MARCEL";
    }
    else
    {
        cout << "JOAOZAO";
    }
    return 0;
}