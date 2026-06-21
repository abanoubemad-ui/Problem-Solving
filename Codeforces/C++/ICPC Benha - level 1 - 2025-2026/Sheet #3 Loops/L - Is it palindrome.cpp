#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long long n, rev = 0;
    cin >> n;
    long long oldn = n;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (oldn != rev)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}