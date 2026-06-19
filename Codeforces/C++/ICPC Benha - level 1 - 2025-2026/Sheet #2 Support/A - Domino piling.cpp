#include <iostream>
using namespace std;

int main()
{
    float n, m, sum2;
    cin >> m >> n;
    int sum = (n * m) / 2;
    sum2 = (n * m) / 2;
    if (sum2 > sum)
    {
        cout << sum++;
    }
    else
    {
        cout << sum;
    }
    return 0;
}