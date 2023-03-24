#include<bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2){
    int m =s1.length();
    int n= s2.length();
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        dp[i][0]=0;
    }
    for(int j=0;j<=n;j++)
       dp[0][j]=0;
    
}