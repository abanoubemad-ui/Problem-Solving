#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    int M = 0, S = 0, Difference = 0;

    for (int i = 0; i < n; i++)
    {
        M += arr[i][i];
        S += arr[i][n - 1 - i];
    }

    Difference = M - S;
    if (Difference < 0)
        Difference *= -1;
    
    cout << Difference;
    return 0;
}