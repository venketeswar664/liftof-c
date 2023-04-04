#include <stdio.h>

void findFactorial(int n, int *result);

int main()
{
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    findFactorial(num, &factorial);

    printf("Factorial of %d is %d", num, factorial);

    return 0;
}

void findFactorial(int n, int *result)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        *result *= i;
    }
}