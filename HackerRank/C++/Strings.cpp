#include <iostream>
#include <string>
using namespace std;

void swap(string a, string b)
{
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b;
}
int main()
{
    string a, b, c;
    cin >> a >> b;
    int len_a = a.size(), len_b = b.size();
    c = a + b;
    cout << len_a << " " << len_b << endl;
    cout << c << endl;
    swap(a, b);
    return 0;
}