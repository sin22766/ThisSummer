#include <iostream>
using lli = long long int;
using namespace std;

int main() {
    lli n,coin[] = {0,0,0,0};
    cin >> n;
    coin[3] = n / 10;
    n = n%10;
    coin[2] = n / 5;
    n = n%5;
    coin[1] = n / 2;
    n = n%2;
    coin[0] = n;
    cout << coin[3]+coin[2]+coin[1]+coin[0] << "\n";
    for (lli j :coin) {
        cout << j << " ";
    }
    return 0;
}