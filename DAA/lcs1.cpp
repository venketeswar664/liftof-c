#include <bits/stdc++.h>
using namespace std;
vector<char> ans;
int lcs(string str1, string str2, int n1, int n2, int dp[][5]){
    if (n1 == 0 || n2 == 0){
        return 0;
    }
    if (dp[n1 - 1][n2 - 1] != -1){
        return dp[n1 - 1][n2 - 1];
    }
    if (str1[n1 - 1] == str2[n2 - 1]){
        ans.push_back(str1[n1 - 1]);
        dp[n1 - 1][n2 - 1] = 1 + lcs(str1, str2, n1 - 1, n2 - 1, dp);
        return dp[n1 - 1][n2 - 1];
    }
    else{ 
        int ans1 = lcs(str1, str2, n1 - 1, n2, dp);
        int ans2 = lcs(str1, str2, n1, n2 - 1, dp);
        dp[n1 - 1][n2 - 1] = max(ans1, ans2);
        return dp[n1 - 1][n2 - 1];
    }
}
int main(){
    string str1 = "danger";
    string str2 = "anger";
    int n1 = str1.size();
    int n2 = str2.size();
    int dp[6][5];
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 5; j++){
            dp[i][j] = -1;
        }
    }
    cout << lcs(str1, str2, 6, 5, dp) << endl;
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i];
    }
}



//  int lcs1(string str1, string str2, int n1, int n2, int dp[][5]{
//     if(n1==0 || n2==0)
//       return 0;
//     if(dp[n1-1][n2-1]!=-1)
//       return dp[n1-1][n2-1];
//     if(str1[n1 -1]==str2[n2 -1])
//       ans .push_back(str1[n-1]);
//       dp[n1-1][n2-1] = 1+ lcs1(str1, str2, n1 -1, n2-1, dp);
//       return dp[n1-1][n2 -1];
//     }
//     else{
//         int ans1 = lcs1(str1, str2, n1, n2-1, dp);
//         int ans2 = lcs1(str1, str2, n1-1, n2, dp);
//         dp[n1-1][n2-1]= max(ans1, ans2);
//         return dp[n1-1][n2-1];
//     }
// })