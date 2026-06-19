#include <iostream>
using namespace std;

int main()
{
    int n, max = 0;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        if (num >= max)
        {
            max = num;
        }
    }
    cout << max;
    return 0;
}