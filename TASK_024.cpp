#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,x,y;
    cin >> n >> m;
    vector<int> adj[n];
    for (int i = 0; i < n; ++i) {
        adj[i].assign(n,0);
    }
    for (int j = 0; j < m; ++j) {
        cin >> x >> y;
        adj[x-1][y-1] = 1;
        adj[y-1][x-1] = 1;
    }
    for (int k = 0; k < n; ++k) {
        for (auto i:adj[k]) {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}