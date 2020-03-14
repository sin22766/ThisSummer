#include <bits/stdc++.h>
using namespace std;

void BFS(vector<int> g[],int start,vector<bool> &visited){
    queue<int> q;
    q.push(start+1);
    visited[start] = true;
    while (!q.empty()){
        int f = q.front();
        q.pop();
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
    int n, m,x,y,count = 0;
    cin >> n >> m;
    vector<bool> visited(n,false);
    bool temp = false;
    vector<int> g[n];
    for (int i = 0; i < m; ++i) {
        cin >> x >> y;
        g[x-1].push_back(y);
        g[y-1].push_back(x);
    }
    int j = 0;
    while (!temp){
        for (int i = 0;i < n;i++)
        {
            if(i == 0){
                temp = visited[0];
            }else{
                temp = temp&&visited[i];
            }
            if(!visited[i]){
                j = i;
                break;
            }
        }
        if(!visited[j]){
            BFS(g,j,visited);
            count++;
        }
    }

    cout << count;
    return 0;
}