#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int> g[],int start,vector<bool> &visited){
    queue<int> q;
    q.push(start);
    visited[start-1] = true;
    while (!q.empty()){
        int f = q.front();
        q.pop();
        cout << f << " ";
        sort(g[f-1].begin(),g[f-1].end());
        for (int i:g[f-1]) {
            if(!visited[i-1]){
                q.push(i);
                visited[i-1] = true;
            }
        }
    }
}

int main() {
    int n, m,x,y,start;
    cin >> n >> m;
    vector<bool> visited(n,false);
    vector<int> g[n];
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        g[x-1].push_back(y);
        g[y-1].push_back(x);
    }
    cin >> start;
    BFS(g,start,visited);
    return 0;
}