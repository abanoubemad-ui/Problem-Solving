#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double out = (y2 - y1) / (x2 - x1);
    cout << fixed << setprecision(2) << out;
    return 0;
}