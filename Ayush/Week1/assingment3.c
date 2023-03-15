#include<stdio.h>
int main()
{
int i,s=0;
printf(" enter a number");
scanf("%d",&i);
do
{
    s=s+(i%10);
    i=i/10;
}while (i>0);
printf("sum is %d",s);
return 0;
}
