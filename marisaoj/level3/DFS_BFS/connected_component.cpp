// haolamnm

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

void dfs(int n, vector<vector<int>> &graph, vector<bool> &visited) {
    visited[n] = true;
    for (int i = 0; i < graph[n].size(); i++) {
        if (!visited[graph[n][i]]) {
            dfs(graph[n][i], graph, visited);
        }
    }
}
int n, m;
unsigned cnt = 0;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;

    vector<vector<int>> graph(n+1);
    vector<bool> visited(n+1, false);

    while (m--) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i, graph, visited);
            ++cnt;
        }
    }
    cout << cnt;
    
    return 0;
}