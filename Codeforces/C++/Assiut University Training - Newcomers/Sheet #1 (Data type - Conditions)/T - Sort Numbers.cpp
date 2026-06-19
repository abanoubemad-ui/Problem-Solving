#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, f, s, t;
    cin >> a >> b >> c;
    if (a <= b && a <= c)
    {
        f = a;
        if (b <= c)
        {
            s = b;
            t = c;
        }
        else
        {
            s = c;
            t = b;
        }
    }
    else if (b <= a && b <= c)
    {
        f = b;
        if (c <= a)
        {
            s = c;
            t = a;
        }
        else
        {
            s = a;
            t = c;
        }
    }
    else
    {
        f = c;
        if (a <= b)
        {
            s = a;
            t = b;
        }
        else
        {
            s = b;
            t = a;
        }
    }
    cout << f << endl
         << s << endl
         << t << endl
         << endl
         << a << endl
         << b << endl
         << c;

    return 0;
}