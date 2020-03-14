#include <iostream>

using namespace std;

class tai {
public:
    int date, price;
};

int main() {
    int n, m, max = 0,max_n,max_m;
    cin >> n >> m;
    tai sell[n], buy[m];
    for (int i = 0; i < n + m; ++i) {
        if (i < n) {
            cin >> sell[i].date >> sell[i].price;
        } else {
            cin >> buy[i - n].date >> buy[i - n].price;
        }
    }
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (sell[j].date <= buy[i].date) {
                if (buy[i].price - sell[j].price > max) {
                    max = buy[i].price - sell[j].price;
                    max_n = j+1;
                    max_m = i+1;
                }
            }
        }
    }
    cout << max << "\n";
    if(max!=0){
        cout << max_n << " " << max_m;
    }
    return 0;
}