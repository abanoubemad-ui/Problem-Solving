#include <iostream>
using namespace std;

int main()
{
    double n, x, sum;
    cin >> n;
    x = n - 4;
    int out = x / 4;
    sum = x / 4;
    /*    cout << x << endl
             << out << endl
             << sum;*/
    if (n <= 4)
    {
        out = 0;
    }
    else if (sum > out)
    {
        out += 1;
    }
    cout << out;
    return 0;
}