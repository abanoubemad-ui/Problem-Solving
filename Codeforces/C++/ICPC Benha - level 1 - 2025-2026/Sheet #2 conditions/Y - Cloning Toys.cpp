#include <iostream>
using namespace std;

int main()
{
    long long c, o;
    cin >> c >> o;

    if ((c > 0 && o == 0) || (o == 0) || (o == 1 && c > 0))
    {
        cout << "NO" << endl;
    }
    else
    {
        int rc = c - (o - 1);
        if (rc % 2 == 0 && rc >= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}