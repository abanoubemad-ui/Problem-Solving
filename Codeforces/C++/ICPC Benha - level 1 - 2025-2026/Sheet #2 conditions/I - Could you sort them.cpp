#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, first, second, third;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        third = a;
        if (b >= c)
        {
            second = b;
            first = c;
        }
        else
        {
            second = c;
            first = b;
        }
    }
    else if (b >= a && b >= c)
    {
        third = b;
        if (a >= c)
        {
            second = a;
            first = c;
        }
        else
        {
            second = c;
            first = a;
        }
    }
    else if (c >= a && c >= b)
    {
        third = c;
        if (a >= b)
        {
            second = a;
            first = b;
        }
        else
        {
            second = b;
            first = a;
        }
    }
    cout << first << " " << second << " " << third;
    return 0;
}