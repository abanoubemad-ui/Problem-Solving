#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, C, sum;
    cin >> a >> b >> c;
    C = c * c;
    sum = a * a + b * b;
    if (C == sum)
    {
        cout << "Right";
    }
    else if (C > sum)
    {
        cout << "Obtuse";
    }
    else if (C < sum)
    {
        cout << "Acute";
    }
    return 0;
}