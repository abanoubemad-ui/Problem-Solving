#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int fd = x / 1000;
    if (fd % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}