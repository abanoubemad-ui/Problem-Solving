#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        long long result = arr[0] + arr[1] + (2 - 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum = arr[i] + arr[j] + ((j + 1) - (i + 1));
                if (sum < result)
                {
                    result = sum;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}