#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    if (((a >= 0 && b <= 0)) || (a <= 0 && b >= 0))
    {
        cout << "Zero";
    }
    else if (a % 2 == 0 && b % 2 == 0 && a + b < 0)
    {
        cout << "Negative";
    }
    else if ((a % 2 == 0 || b % 2 == 0) && a + b < 0)
    {
        cout << "Positive";
    }
    else if (a % 2 != 0 && b % 2 != 0 && a + b < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Positive";
    }
    return 0;
}