#include <bits/stdc++.h>
using namespace std;
int knapSack(int val[], int wt[], int n, int W, int dp[][7]){
    if (n == 0 || W == 0){
        return 0;
    }
    if (dp[n][W] != -1){
        return dp[n][W];
    }
    if (wt[n - 1] <= W){
        int ans1 = val[n - 1] + knapSack(val, wt, n - 1, W - wt[n - 1], dp);
        int ans2 = knapSack(val, wt, n - 1, W, dp);
        dp[n][W] = max(ans1, ans2);
        return dp[n][W];
    }
    else{
        dp[n][W] = knapSack(val, wt, n - 1, W, dp);
        return dp[n][W];
    }
}
int main(){
    int val[] = {15, 14, 10, 45, 30};
    int wt[] = {2, 5, 1, 3, 4};
    int W = 7;
    int dp[5][7];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 8; j++){
            dp[i][j] = -1;
        }
    }
    cout << knapSack(val, wt,5,7,dp);
}
