#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int freq[MAX_SIZE];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    len = strlen(str);

    for (i = 0; i < len; i++) {
        freq[i] = -1;
    }

    for (i = 0; i < len; i++) {
        int count = 1;
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Character frequencies in the string:\n");
    for (i = 0; i < len; i++) {
        if (freq[i] != 0) {
            printf("%c = %d\n", str[i], freq[i]);
        }
    }

    return 0;
}