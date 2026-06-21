#include <iostream>
using namespace std;

int main()
{
    long long n, a = 0, b = 1;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = a;
        long long c = a + b;
        a = b;
        b = c;
    }
    cout << arr[n - 1];
    return 0;
}