#include <iostream>
using namespace std;

int main()
{
    int a, b, sa, sb;
    cin >> a >> b;
    sa = (a % 100) / 10 + (a % 10) + (a / 100);
    sb = (b % 100) / 10 + (b % 10) + (b / 100);
    if (sa >= sb)
    {
        cout << sa;
    }
    else
    {
        cout << sb;
    }
    return 0;
}