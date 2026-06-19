#include <iostream>
using namespace std;

int main()
{
    long long L1, L2, R1, R2, f, s;
    cin >> L1 >> R1 >> L2 >> R2;
    if (L2 > R1 || L1 > R2)
    {
        cout << "-1";
    }
    else if (L2 >= L1)
    {
        f = L2;
        if (R2 >= R1)
        {
            s = R1;
        }
        else
        {
            s = R2;
        }
        cout << f << " " << s;
    }
    else if (L1 >= L2)
    {
        f = L1;
        if (R2 >= R1)
        {
            s = R1;
        }
        else
        {
            s = R2;
        }
        cout << f << " " << s;
    }
    return 0;
}
