#include<bits/stdc++.h> 
using namespace std; 
vector<int> adjList[100005]; 
bool visited[100005]; 
void bfs(int start) {
    queue<int> q;
    q.push(start); 
    visited[start] = true;
    while (!q.empty()) {
        int curNode = q.front(); 
        q.pop(); 
        cout << curNode << " ";
        for (auto it : adjList[curNode]) {
            if (!visited[it]) {
                q.push(it);
                visited[it] = true;
            }
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    bfs(1);
    return 0;
}


