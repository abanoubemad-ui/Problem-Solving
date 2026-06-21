#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (int(x) >= 65 && int(x) <= 90)
    {
        cout << "capital " << int(x - 65);
    }
    else if (int(x) >= 97 && int(x) <= 122)
    {
        cout << "small " << int(x - 97);
    }
    else if (int(x) >= 48 && int(x) <= 57)
    {
        cout << "digit";
    }
    else
    {
        cout << "symbol";
    }
    return 0;
}