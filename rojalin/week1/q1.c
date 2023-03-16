#include <stdio.h>
int main()
{
    int i, n ;
    printf("Enter the number :");
    scanf("%d", &n);
if ((i%15) == 0){
            printf("FizzBuzz\t");
        }
        else if ((i%5) == 0){
            printf("Buzz\t");
        }

        else if(i%3==0){
             printf("Fizz\t");
        }
        else
        {
            printf("%d\t");
        }
return 0;
}