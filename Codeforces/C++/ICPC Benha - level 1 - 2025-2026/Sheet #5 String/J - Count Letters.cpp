#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[150] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freq[(int)s[i]]++;
    }
    for (int i = 0; i < 150; i++)
    {
        if (freq[i] != 0)
        {
            cout << char(i) << " : " << freq[i] << endl;
        }
    }
    return 0;
}