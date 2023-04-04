#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char remove;
    int i, j;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    getchar(); // consume newline character

    printf("Enter a character to remove: ");
    scanf("%c", &remove);

    int len = strlen(str);
    j = 0;
    for (i = 0; i < len; i++) {
        if (str[i] != remove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing %c: %s\n", remove, str);

    return 0;
}
