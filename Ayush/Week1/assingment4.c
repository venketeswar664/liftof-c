#include<stdio.h>
int main()
{
    int a,b,c;
    printf ("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Enter 1 for addition\nenter 2 for substraction\n");
    printf("enter 3 for multiplication \nenter 4 for division");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        {
        printf("addition is %d",a+b);
        break;
        }
    case 2:
        {
            printf("sub is %d",a-b);
            break;
        }
    case 3:
        {
            printf("multiplicaton is %d",a*b);
            break;
        }
    case 4:
        {
            printf("div is %f",a/b);
            break;
        }
    default :
        {
            printf("enter correct number");
            break;
        }
}
    return 0;
    }
