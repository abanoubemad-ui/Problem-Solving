#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    char s;
    cin >> a >> s >> b;
    if (s == '/' && b == 0)
    {
        cout << "invalid";
    }
    else
    {
        cout << "valid";
    }
    return 0;
}