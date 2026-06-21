#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0, even = 0, odd = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        sum += a;
        if (a % 2 == 0)
        {
            even++;
        }
        else if (a % 2 != 0)
        {
            odd++;
        }
    }
    cout << sum << " " << odd << " " << even;
    return 0;
}