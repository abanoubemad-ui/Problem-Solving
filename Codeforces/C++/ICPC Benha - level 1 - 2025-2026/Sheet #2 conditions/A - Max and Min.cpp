#include <iostream>
using namespace std;
 
int main()
{
    int a, b, c;
    int minimum, maximum;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
            minimum = c;
        }
        else
        {
            minimum = b;
        }
        maximum = a;
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            minimum = c;
        }
        else
        {
            minimum = a;
        }
        maximum = b;
    }
    else
    {
 
        if (b >= a)
        {
            minimum = a;
        }
        else
        {
            minimum = b;
        }
        maximum = c;
    }
    cout << minimum << " " << maximum;
    return 0;
}