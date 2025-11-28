#include <stdio.h>

int main(void) {
    int arr[5] = {0, 12, 4, 45, 7};
    int *p = arr;

    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    printf("Array elements (p[i]): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}
