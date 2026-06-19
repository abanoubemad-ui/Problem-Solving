#include <iostream>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    if (a % 5 == 0 && a % 7 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}