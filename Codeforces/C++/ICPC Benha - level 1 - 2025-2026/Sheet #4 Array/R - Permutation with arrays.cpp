#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n);

    bool permutation = true;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
        {
            permutation = false;
            break;
        }
    if (permutation)
        cout << "yes";
    else
        cout << "no";
    return 0;
}