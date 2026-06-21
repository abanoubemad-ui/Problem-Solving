#include <iostream>
using namespace std;

int main()
{
    long long n;
    string out = "Prime";
    cin >> n;
    if (n == 1)
    {
        cout << "Not Prime";
        return 0;
    }
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            out = "Not Prime";
            break;
        }
    }
    cout << out;
    return 0;
}
