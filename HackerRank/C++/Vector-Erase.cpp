#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int v_size, remove, a, b;
    cin >> v_size;
    vector<int> v(v_size);

    for (int i = 0; i < v_size; i++)
    {
        cin >> v[i];
    };

    cin >> remove;
    v.erase(v.begin() + remove - 1);
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}