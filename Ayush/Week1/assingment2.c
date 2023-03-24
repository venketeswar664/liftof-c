#include<stdio.h>
int main()
{
int i;
printf("enter a number");
scanf("%d",&i);
if  (i>=0)
{
    if (i=0)
        printf("it is zero");
    else
    printf("it is a positive  number");
}
else if (i<0)
    printf("it is a negative number");
else
    printf("enter a valid input");
}