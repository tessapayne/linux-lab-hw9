#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *left = arr;
    int *right = arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main(void) {
    int arr[5] = {3, 8, 12, 5, 9};

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, 5);

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
