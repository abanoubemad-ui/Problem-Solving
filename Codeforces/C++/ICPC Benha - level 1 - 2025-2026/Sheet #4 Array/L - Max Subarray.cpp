#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int size;
        cin >> size;
        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            int max = arr[i];
            for (int j = i; j < size; j++)
            {
                if (arr[j] > max)
                {
                    cout << arr[j] << " ";
                    max = arr[j];
                }
                else
                    cout << max << " ";
            }
        }
        cout << endl;
    }
    return 0;
}