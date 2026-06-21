#include <iostream>
using namespace std;

int main()
{
    int n, lowest_num = 0, index = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    lowest_num = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < lowest_num)
        {
            lowest_num = arr[i];
            index = i + 1;
        }
    }
    cout << lowest_num << " " << index;
    return 0;
}