#include <iostream>
using namespace std;

int main()
{
    float n, c;
    cin >> n;
    int a = n;
    if (n - a == 0)
    {
        cout << "int" << " " << a;
    }
    else
    {
        c = n - a;
        cout << "float" << " " << a << " " << c;
    }
    return 0;
}