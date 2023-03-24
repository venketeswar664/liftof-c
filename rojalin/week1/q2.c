#include<stdio.h>
int main(){
    int num,sum;
    printf("enter two integers");
    scanf("%d",&num);
    sum=0;
    do{
        sum+=num%10;
        num=num/10;
    }
    while(num>0);
    printf("the sum is =%d\n",sum);
    return 0;
}