#include <iostream>
using namespace std;

int main()
{
    long long p_Misha, p_Vasya, t_Misha, t_Vasya;
    cin >> p_Misha >> p_Vasya >> t_Misha >> t_Vasya;

    long long M_Points_Misha = ((3 * p_Misha) / 10) > (p_Misha - (p_Misha / 250) * t_Misha) ? ((3 * p_Misha) / 10) : (p_Misha - (p_Misha / 250) * t_Misha);
    long long M_Points_Vasya = ((3 * p_Vasya) / 10) > (p_Vasya - (p_Vasya / 250) * t_Vasya) ? ((3 * p_Vasya) / 10) : (p_Vasya - (p_Vasya / 250) * t_Vasya);

    if (M_Points_Misha > M_Points_Vasya)
        cout << "Misha" << endl;

    else if (M_Points_Misha < M_Points_Vasya)
        cout << "Vasya" << endl;

    else
        cout << "Tie" << endl;

    return 0;
}