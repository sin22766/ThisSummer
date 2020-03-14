#include <iostream>
#include <cmath>
using lli = long long int;
using namespace std;

int main() {
    int n, k;
    lli sum = 0,temp, b;
        cin >> n >> k;
        for (int i = 0; i < n; ++i) {
            cin >> temp;
            if (i + 1 != k) {
                sum += temp;
            }
        }
        cin >> b;
        if(round(sum/2.0)>=b){
        cout << "Chi So Cute >//<'";
    }else{
        cout << abs((sum+1)/2-b);
    }
    return 0;
}