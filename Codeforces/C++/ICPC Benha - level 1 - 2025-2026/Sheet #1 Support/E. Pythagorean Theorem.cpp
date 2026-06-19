#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main()
{
    double a, b, c;
    cin >> a >> c;
    b = sqrt(pow(c, 2) - pow(a, 2));
    cout << fixed << setprecision(15) << b;
    return 0;
}