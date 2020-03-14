#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,x,y;
    cin >> n >> m;
    vector<int> g[n];
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        g[x-1].push_back(y);
        g[y-1].push_back(x);
    }
    for (int j = 0; j < n; ++j) {
        sort(g[j].begin(),g[j].end());
        cout << j+1 << " | ";
        for (auto i:g[j]) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}