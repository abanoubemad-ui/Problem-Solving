#include <iostream>
using namespace std;

int main()
{
    int N, a, b, c, sum;
    cin >> N;
    a = N / 100;
    b = (N % 100) / 10;
    c = N % 10;
    sum = a + b + c;
    cout << sum;
    return 0;
}
