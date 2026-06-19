#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main()
{
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double d;
    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << fixed << setprecision(16);
    cout << d;
    return 0;
}
