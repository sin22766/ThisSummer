#include <iostream>
#include <cmath>

using lli = long long int;
using namespace std;

int main() {
    int x, a, b,max = 0;
    cin >> x;
    for (int i = 1; i < x-1; ++i) {
        float j = x-i;
        if((i/j)>max&(i/j)<1){
            a = i;
            b = j;
        }
    }
    cout << a << " " << b;
    return 0;
}