#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    int x = a / b;
    cout << "floor " << a << " / " << b << " = " << x << endl;
    if ((a / b) > x)
    {
        cout << "ceil " << a << " / " << b << " = " << x + 1 << endl;
    }
    else
    {
        cout << "ceil " << a << " / " << b << " = " << x << endl;
    }
    if ((a / b) >= (x + 0.5))
    {
        cout << "round " << a << " / " << b << " = " << x + 1;
    }
    else
    {
        cout << "round " << a << " / " << b << " = " << x;
    }
    return 0;
}