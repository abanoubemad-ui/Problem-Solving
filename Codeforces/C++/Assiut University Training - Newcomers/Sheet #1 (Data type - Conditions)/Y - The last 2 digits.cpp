#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long output = a % 100;
    output = (output * (b % 100) % 100);
    output = (output * (c % 100) % 100);
    output = (output * (d % 100) % 100);
    if (output < 10)
    {
        cout << "0";
    }
    cout << output;
    return 0;
}