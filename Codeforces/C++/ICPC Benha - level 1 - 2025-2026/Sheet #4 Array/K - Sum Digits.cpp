#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - int('0');
    }
    cout << sum;
    return 0;
}