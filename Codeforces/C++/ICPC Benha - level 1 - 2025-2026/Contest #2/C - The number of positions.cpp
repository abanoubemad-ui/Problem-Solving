#include <iostream>
using namespace std;

int main()
{
    int n, a, b, npos;
    cin >> n >> a >> b;

    if (n - a < b + 1)
    {
        npos = n - a;
    }
    else
    {
        npos = b + 1;
    }

    cout << npos << endl;

    return 0;
}