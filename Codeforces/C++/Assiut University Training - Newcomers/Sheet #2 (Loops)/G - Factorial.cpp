#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long num;
        long long x = 1;
        cin >> num;
        for (int i = 1; i <= num; i++)
        {

            x *= i;
        }
        cout << x << endl;
    }
    return 0;
}