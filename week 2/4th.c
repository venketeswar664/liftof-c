#include<stdio.h>
int main(){
    int n=5,num=1;

    for(int i=1;i<=n;i++){
        for (int j = (n+1)-i; j <= n; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
        
    }

    return 0;



}