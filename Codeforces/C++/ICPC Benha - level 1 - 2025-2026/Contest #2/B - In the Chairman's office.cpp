#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if (m % n == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
