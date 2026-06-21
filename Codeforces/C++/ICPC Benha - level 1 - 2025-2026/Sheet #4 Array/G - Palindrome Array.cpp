#include <iostream>
using namespace std;

int main()
{
    int n, a = 0;
    bool palindrome = true;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[a] != arr[i])
        {
            palindrome = false;
            break;
        }
        a++;
    }
    if (!palindrome)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}