#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2 = "hello";
    cin >> s1;
    int n = s1.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[count])
        {
            count++;
        }
    }
    if (count == s2.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}