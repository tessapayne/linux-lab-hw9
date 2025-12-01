#include <stdio.h>

void copy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src; 
        dest++;
        src++; 
    }
    *dest = '\0';
}

int main(void) {
    char src[100];
    char dest[100];

    printf("Enter a string to copy: ");
    if (!fgets(src, sizeof(src), stdin)) {
        puts("Input error.");
        return 1;
    }

    char *p = src;
    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    copy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}
