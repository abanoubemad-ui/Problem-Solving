#include <iostream>
using namespace std;
 
int main() {
   long long n;
    cin >> n;
    long long h = n / 3600;
    long long m = (n % 3600) / 60;
    long long s = n % 60;
    
    cout << h << " " << m << " " << s;
    return 0;
}
