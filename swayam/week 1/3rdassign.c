#include<stdio.h>
int main(){
        int n,sum=0;
    printf("enter the value of n\n");
        scanf("%d",&n);
  do{
    int lastnum=n%10;
    sum+=lastnum;
    n=n/10;

  }while(n>0);
    printf("%d\n",sum);

   return 0; 
}