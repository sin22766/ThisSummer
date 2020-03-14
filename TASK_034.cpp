#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void DFS(int index,vector<int> *graph,vector<bool> &visited){
    visited[index] = true;
    cout << index+1 << " ";
    sort(graph[index].begin(),graph[index].end());
    for (auto i:graph[index]) {
        if(!visited[i]){
            DFS(i,graph,visited);
        }
    }
}

int main(){
    int n,m,u,v,start;
    cin >> n >> m;
    vector<int> graph[n];
    vector<bool> visited(n,false);
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        graph[u-1].push_back(v-1);
        graph[v-1].push_back(u-1);
    }

    cin >> start;
    DFS(start-1,graph,visited);
    return 0;
}