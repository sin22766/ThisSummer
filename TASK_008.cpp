#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> factor;
    int n,temp = 0;
    bool Have;
    cin >> n;
    while (true) {
        Have = false;
        for (int i = 2; i <= n; ++i) {
            if (n % i == 0) {
                if (temp > 0) {
                    cout << 'x';
                }
                cout << i;
                factor.insert(i);
                n = n / i;
                Have = true;
                ++temp;
                break;
            }
        }
        if (!Have) {
            break;
        }
    }
    cout << '\n' << factor.size();
    return 0;
}