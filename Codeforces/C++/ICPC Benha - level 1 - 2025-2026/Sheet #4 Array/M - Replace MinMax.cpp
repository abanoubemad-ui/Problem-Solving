#include <iostream>
using namespace std;

int main()
{
    int n, min_index = 0, max_index = 0, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[min_index])
        {
            min_index = i;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max_index])
        {
            max_index = i;
        }
    }
    temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}