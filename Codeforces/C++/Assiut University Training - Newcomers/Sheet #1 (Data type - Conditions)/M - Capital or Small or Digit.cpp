#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (int(x) >= 97 && int(x) < 123)
    {
        cout << "ALPHA\n"
             << "IS SMALL";
    }
    else if (int(x) >= 65 && int(x) < 91)
    {
        cout << "ALPHA\n"
             << "IS CAPITAL";
    }
    else
    {
        cout << "IS DIGIT";
    }
    return 0;
}