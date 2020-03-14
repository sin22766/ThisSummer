#include <iostream>
#include <cmath>

using lli = long long int;
using namespace std;

int main() {
    int x, a, b;
    cin >> x;
    a = x;
    b = 0;
    while (a >= b) {
        a -= 1;
        b += 1;
    }
    cout << a << " " << b;
    return 0;
}