#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a;
    cin >> a;
    long long max = a, min = a, out;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        if (a > max)
        {
            max = a;
        }
        if (min > a)
        {
            min = a;
        }
    }
    out = max - min;
    cout << out;
    return 0;
}