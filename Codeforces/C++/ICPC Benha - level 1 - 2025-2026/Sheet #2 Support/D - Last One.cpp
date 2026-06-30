#include <iostream>
using namespace std;

int main()
{
    long long h1, h2, d1, d2, t1, t2, p1_shots, p2_shots, p1_time, p2_time;
    cin >> h1 >> d1 >> t1;
    cin >> h2 >> d2 >> t2;
    p1_shots = (h2 + d1 - 1) / d1;
    p2_shots = (h1 + d2 - 1) / d2;
    p1_time = (p1_shots - 1) * t1;
    p2_time = (p2_shots - 1) * t2;
    if (p1_time < p2_time)
        cout << "player one" << endl;
    else if (p2_time < p1_time)
        cout << "player two" << endl;
    else
        cout << "draw" << endl;
    return 0;
}