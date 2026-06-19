#include <iostream>
using namespace std;
 
int main() {
   int x, y;
   cin >> x >> y;
   cout << (x + (y % 7)) % 7;
    return 0;
}