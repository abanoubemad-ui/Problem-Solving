#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    cout
        << s.size() << " " << t.size() << endl;
    s.push_back(' ');
    cout << s.append(t);
    return 0;
}