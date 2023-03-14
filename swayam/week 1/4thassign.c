#include <stdio.h>
int main()
{
  int a, b;
  char ch;
  printf("enter the value of ch\n");
  scanf("%c", &ch);
  printf("enter the value of a and b\n");
  scanf("%d", &a);
  scanf("%d", &b);
  switch (ch)
  {
  case '+':
    printf("sum :%d \n ", a + b);
    break;
  case '-':
    printf("substraction :%d \n ", a - b);
    break;
  case '*':
    printf("multiplication :%d \n ", a * b);
    break;
  case '/':
    if (b != 0)
    {
      printf("division :%d \n ", a / b);
    }
    break;
     case '%':
    printf("modular division :%d \n ", a % b);
    break;
  default:
    printf("enter correct operation \n ");
    break;
  }

  return 0;
}