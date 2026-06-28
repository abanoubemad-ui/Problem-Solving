#include <iostream>
using namespace std;

int main()
{
    int n, m, moves;
    cin >> n >> m;
    if (n < m)
        moves = n;
    else
        moves = m;
    if (moves % 2 == 0)
        cout << "Malvika";
    else
        cout << "Akshat";
    return 0;
}