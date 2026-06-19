#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int even = 0, odd = 0, positive = 0, negative = 0;
    while (n--)
    {
        int num;
        cin >> num;
        if (num % 2 != 0)
        {
            odd++;
        }
        if (num % 2 == 0)
        {
            even++;
        }
        if (num > 0)
        {
            positive++;
        }
        if (num < 0)
        {
            negative++;
        }
    }
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << positive << endl
         << "Negative: " << negative;
    return 0;
}