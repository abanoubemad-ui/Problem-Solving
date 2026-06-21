#include <iostream>
using namespace std;

int main()
{
    int n, x;
    bool found = false;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << -1;
    }
    return 0;
}