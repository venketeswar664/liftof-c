#include <bits/stdc++.h>
using namespace std;
int primMST(vector<vector<int> > graph, int v)
{
    int key[v], res = 0;
    key[0] = 0;
    for (int i = 0; i < v; i++)
        key[i] = INT_MAX;
    bool mSet[v] = {false};
    for (int ct = 0; ct < v; ct++)
    {
        int u = -1;
        for (int i = 0; i < v; i++)
        {
            if (!mSet[i] && (u == -1 || key[i] < key[u]))
                u = i;
        }
        mSet[u] = true;
        res = res + key[v];
        for (int j = 0; j < v; j++)
        {
            if (graph[u][v] != 0 && !mSet[v])
                key[v] = min(key[v], graph[u][v]);
        }
    }
    return res;
}
int main()
{
    int v = 5;
    vector<vector<int> >graph = {{0, 2, 0, 6, 0},
                               {2, 0, 3, 8, 5},
                               {0, 3, 0, 0, 7},
                               {6, 8, 0, 0, 9},
                               {0, 5, 7, 9, 0}};
    cout<<primMST(graph, v);
    return 0;
}