#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x, y;
    vector<int> adj[n];
    int in[n], out[n];

    for (int i = 0; i < n; i++)
        in[i] = out[i] = 0;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        in[y - 1]++;
        out[x - 1]++;
    }

    for (int i = 0; i < n; i++) {
        cout << in[i] << " " << out[i] << "\n";
    }
    return 0;
}

