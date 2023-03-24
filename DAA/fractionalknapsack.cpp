#include <bits/stdc++.h>
using namespace std;
int main(){
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int capacity = 50;
    int ans = 0;
    vector<pair<int, double>> p;
    for (int i = 0; i < 3; i++){
        p.push_back(make_pair(i, val[i] / wt[i]));
    }
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3 - i - 1; j++)
            if (p[j].second > p[j + 1].second)
                swap(p[j], p[j + 1]);
    for (int i = 2; i >= 0; i--){
        int idx = p[i].first;
        if (wt[idx] <= capacity){
            ans += val[idx];
            capacity = capacity - wt[idx];
        }
        else{
            ans = ans + capacity * p[i].second;
            capacity = 0;
        }
    }
    cout <<ans<<endl;
}