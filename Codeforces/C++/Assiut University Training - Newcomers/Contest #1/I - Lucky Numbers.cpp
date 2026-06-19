
#include <iostream>
using namespace std;

int main()
{
    int a, f, s;
    cin >> a;
    f = a / 10;
    s = a % 10;
    if (s == 0 || (f % s == 0 || s % f == 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}