#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int v_size;
    cin >> v_size;

    vector<int> v;
    for (int i = 0; i < v_size; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
