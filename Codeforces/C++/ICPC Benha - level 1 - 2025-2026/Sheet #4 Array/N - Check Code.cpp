#include <iostream>
using namespace std;

int main()
{
    int a, b, size;
    cin >> a >> b;
    size = a + b + 1;
    char arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (arr[a] != '-')
    {
        cout << "No" << endl;
        return 0;
    }

    bool isValid = true;

    for (int i = 0; i < size; i++)
    {
        if (i == a)
        {
            continue;
        }

        if (arr[i] < '0' || arr[i] > '9')
        {
            isValid = false;
            break;
        }
    }

    if (isValid)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}