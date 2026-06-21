#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    long long sum = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        sum = sum + s[i] - '0';
    }
    cout << sum;
    return 0;
}