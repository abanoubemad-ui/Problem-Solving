#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    if (x.compare(y) > 0)
    {
        cout << y;
    }
    else
    {
        cout << x;
    }
    return 0;
}