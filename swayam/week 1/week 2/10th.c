#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int alpha = 0;
    int dig = 0;
    int s_char = 0;
    printf("enter the string\n");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alpha++;
        }
        else if (str[i] >= '0' && str[i] <='9')
        {
            dig++;
        }
        else
        {
            s_char++;
        }
    }
    printf("the number of alphabers in the given string is :%d\n", alpha);
    printf("the number of digits in the given string is :%d\n", dig);
    printf("the number of special characters in the given string is :%d\n", s_char);

    return 0;
}