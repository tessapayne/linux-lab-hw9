#include <stdio.h>

int main(void) {
    int a, b; 
    int *pa = &a;
    int *pb = &b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        puts("Invalid input.");
        return 1;
    }

    int sum = *pa + *pb;

    printf("Using pointers:\n");
    printf("First number  = %d\n", *pa);
    printf("Second number = %d\n", *pb);
    printf("Sum = %d\n", sum);

    return 0;
}
