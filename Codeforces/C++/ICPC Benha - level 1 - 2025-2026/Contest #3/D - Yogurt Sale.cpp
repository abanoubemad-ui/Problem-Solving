#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, a, b, price = 0;
        cin >> n >> a >> b;
        while (n >= 2)
        {
            if ((2 * a) >= b)
                price += b;
            else
                price += (a * 2);
            n -= 2;
        }
        if (n % 2 != 0)
            price += a;
        cout << price << endl;
    }
    return 0;
}