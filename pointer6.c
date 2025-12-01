#include <stdio.h>

int length(char *s) {
    char *p = s;
    while (*p != '\0') {
        p++;
    }
    return p - s;
}

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) {
        puts("Input error.");
        return 1;
    }

    char *nl = str;
    while (*nl != '\0') {
        if (*nl == '\n') { 
            *nl = '\0';
            break;
        }
        nl++;
    }

    printf("Length of string = %d\n", length(str));
    return 0;
}
