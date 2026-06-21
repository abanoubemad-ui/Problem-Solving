#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    long long a, b, c;
    char q, o;
    cin >> a >> o >> b >> q >> c;

    if (o == '+')
    {
        if ((a + b) == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }
    }

    if (o == '-')
    {
        if ((a - b) == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }

    if (o == '*')
    {
        if ((a * b) == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }

    return 0;
}