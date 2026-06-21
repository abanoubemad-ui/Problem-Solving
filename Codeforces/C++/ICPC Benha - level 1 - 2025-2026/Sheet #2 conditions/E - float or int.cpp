
#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    int a = n;
    if (n - a == 0)
    {
        cout << "int";
    }
    else
    {
        cout << "float";
    }
    return 0;
}