#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = true;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[(n - 1) - i])
        {
            flag = false;
        }
    }
    if (!flag)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}
