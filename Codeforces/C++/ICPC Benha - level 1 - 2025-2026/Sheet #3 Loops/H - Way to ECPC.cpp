#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        double s, v, vn, m = 0;
        cin >> s >> v;
        vn = v * (1000.0 / 60.0);
        m = vn * s;
        cout << fixed << setprecision(6) << m << endl;
    }
    return 0;
}