#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    bool found = false;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "will not take number";
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }
    if (!found)
    {
        cout << "will take number";
    }
    return 0;
}