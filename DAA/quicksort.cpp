#include<bits/stdc++.h>
using namespace std;
int partition (int A[], int p, int r){
    int x = A[r];
    int i = p - 1;
    for (int j = p; j <= r- 1; j++){
        if (A[j] <= x)
        {
            i++;
            swap (A[i], A[j]);
        }
    }
     swap (A[i + 1], A[r]);
    return (i + 1);
}
void quickSort(int A[], int p, int r){
    if (p < r){
        int q = partition(A, p,r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}
int main(){
    int a[] = {2,6,5,1,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}


// int partition(int a[], int p, int r){
//     int x = a[r];
//     int i= p-1;
//     for(int j=p;j<r-1;j++){
//         if(a[j]<= x){
//             i++;
//             swap(a[i], a[j]);
//         }

//     }
//     swap(a[i+1], arr[r]);
//     return i+1;
// }
// void qioid(int arr[], int p, int r){
//     if(p<r){
//         q =  partition(arr, p, r);
//         qioid(arr, p, q-1);
//         qioid(arr, q+1, r);
//     }
// }