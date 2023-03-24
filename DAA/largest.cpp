#include<bits/stdc++.h>
using namespace std;
int largest(int arr[], int n){
    if(n==0)
      return arr[0];
    else 
      return max(arr[n-1], largest(arr, n-1));
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largest(arr, n);

}
