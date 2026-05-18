#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    long long l;
    char a;
    float f;
    double d;
    cin >> n >> l >> a >> f >> d;
    printf("%d\n%ld\n%c\n%.3f\n%.9f", n, l, a, f, d);
    return 0;
}
