#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l,r,sum = 0;
    cin >> l >> r;
    for (int i = l; i <= r; ++i) {
        sum += sqrt(i);
    }
    cout << sum;
    return 0;
}