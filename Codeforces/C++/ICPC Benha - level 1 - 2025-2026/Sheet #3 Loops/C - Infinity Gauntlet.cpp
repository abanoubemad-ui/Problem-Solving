#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double a;
        cin >> a;
        cout << fixed << setprecision(1) << a / 2.00 << endl;
    }
    return 0;
}