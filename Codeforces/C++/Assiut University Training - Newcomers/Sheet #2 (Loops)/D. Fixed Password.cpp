#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int pass;
        cin >> pass;
        if (pass == 1999)
        {
            cout << "Correct";
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}
