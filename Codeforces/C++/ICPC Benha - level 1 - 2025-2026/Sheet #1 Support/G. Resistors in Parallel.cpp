#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main()
{
    double a, b;
    cin >> a >> b;
    double r;
    r = (a * b) / (a + b);
    cout << fixed << setprecision(15) << r;
    return 0;
}