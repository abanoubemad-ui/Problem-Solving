#include <iostream>
using namespace std;

int main()
{
    int n;
    string out = "YES";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            out = "NO";
        }
    }
    cout << out;
    return 0;
}