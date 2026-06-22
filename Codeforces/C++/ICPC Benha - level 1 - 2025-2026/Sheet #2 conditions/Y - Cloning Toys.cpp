#include <iostream>
using namespace std;

int main()
{
    int c, o;
    cin >> c >> o;

    if ((c > 0 && o == 0) || o == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        int rc = c - (o - 1);
        if (rc % 2 == 0)
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