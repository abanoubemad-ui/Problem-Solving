#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    cout << x * (n % 2);
    return 0;
}