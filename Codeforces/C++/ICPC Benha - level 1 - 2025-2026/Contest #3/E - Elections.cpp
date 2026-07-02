#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long A, B, C;
        long long maxBC = max(b, c);
        if (a > maxBC)
        {
            A = 0;
        }
        else
        {
            A = maxBC - a + 1;
        }
        long long maxAC = max(a, c);
        if (b > maxAC)
        {
            B = 0;
        }
        else
        {
            B = maxAC - b + 1;
        }
        long long maxAB = max(a, b);
        if (c > maxAB)
        {
            C = 0;
        }
        else
        {
            C = maxAB - c + 1;
        }
        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}