#include <iostream>
using namespace std;

int main()
{
    int a, n, numOfOperation = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isValid = true;

    // 8 12 40 0
    // 4 6   20 1
    // 2 3  10 2

    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                isValid = false;
                break;
            }
        }
        if (!isValid)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] /= 2;
        }
        numOfOperation++;
    }

    cout << numOfOperation << endl;
    return 0;
}