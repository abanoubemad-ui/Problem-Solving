#include <iostream>
using namespace std;

int main()
{
    int m1, m2, b1, b2;
    char y, o1, x, o2;

    cin >> y >> o1 >> m1 >> x >> o2 >> b1;
    cin >> y >> o1 >> m2 >> x >> o2 >> b2;

    if (m1 == m2)
    {
        cout << "PARALLEL" << endl;
    }

    else
    {
        cout << "NOT PARALLEL" << endl;
    }
    return 0;
}