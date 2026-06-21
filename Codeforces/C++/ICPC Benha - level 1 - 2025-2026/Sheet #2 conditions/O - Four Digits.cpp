#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 9)
    {
        cout << "000" << n;
    }
    else if (n > 9 && n <= 99)
    {
        cout << "00" << n;
    }
    else if (n > 99 && n <= 999)
    {
        cout << "0" << n;
    }
    else
    {
        cout << n;
    }
    return 0;
}