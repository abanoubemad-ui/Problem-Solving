#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum1 = (n * (n + 1)) / 2;
    long long sum2 = 0, a;
    for (int i = 1; i < n; i++)
    {
        cin >> a;
        sum2 += a;
    }
    long long out = sum1 - sum2;
    cout << out;
    return 0;
}