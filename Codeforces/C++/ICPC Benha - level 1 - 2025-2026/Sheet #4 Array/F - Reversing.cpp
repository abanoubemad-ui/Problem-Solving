#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    cin >> n;
    int arr[n];
    int rev[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        rev[a] = arr[i];
        a++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << rev[i] << " ";
    }
    return 0;
}