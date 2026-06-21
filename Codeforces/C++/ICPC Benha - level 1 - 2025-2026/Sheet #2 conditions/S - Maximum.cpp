#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a, b, c, f, s, t;
    cin >> a >> b >> c;
    f = a + b;
    s = a + c;
    t = c + b;
    if (f >= s && f >= t)
        cout << f;
    else if (s >= f && s >= t)
        cout << s;
    else
        cout << t;
    return 0;
}