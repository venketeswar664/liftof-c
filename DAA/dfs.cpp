#include<bits/stdc++.h>
using namespace std;
void DFS(vector<int> adj[], int s, bool visited[]){
    visited[s]=true;
    cout<<s<<" ";
    for(auto u: adj[s])
      if(visited[u]==false)
       DFS(adj, u, visited);
}
void DFSS(vector<int> adj[], int v, int s)
{
    bool visited[v];
    for(int i=0;i<v;i++)
     visited[i]=false;
    for(int i=0;i<v;i++)
      if(visited[i]==false)
        DFS(adj, i, visited);
}
int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    DFSS();
    return 0;
}