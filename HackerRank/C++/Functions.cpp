#include <iostream>
using namespace std;

int maxNum(int arr[])
{
    int MAX_NUM = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > MAX_NUM)
        {
            MAX_NUM = arr[i];
        }
    }
    return MAX_NUM;
}
int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << maxNum(arr);
    return 0;
}