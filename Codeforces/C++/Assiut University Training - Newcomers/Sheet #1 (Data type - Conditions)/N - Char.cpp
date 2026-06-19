#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (int(x) >= 65 && int(x) <= 90)
    {
        cout << char(x + 32);
    }
    else
    {
        cout << char(x - 32);
    }
    return 0;
}