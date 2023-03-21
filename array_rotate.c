#include <stdio.h>

void rotate(int arr[], int d, int n) {
    int temp[d], i;

    for (i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    for (i = d; i < n; i++) {
        arr[i-d] = arr[i];
    }

    for (i = 0; i < d; i++) {
        arr[n-d+i] = temp[i];
    }
}

int main() {
    int arr[] = {5, 2, 3, 4, 5,6,99,86,45,32};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 4,i;

    printf("Original array: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    rotate(arr, d, n);

    printf("\nRotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

