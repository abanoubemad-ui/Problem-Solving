#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double X, P;
    cin >> X >> P;
    double o = P / ((100 - X) / 100.0);
    cout << fixed << setprecision(2) << o;
    return 0;
}