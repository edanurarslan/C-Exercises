#include <stdio.h>

int is_sorted(int array[], int size);

int main() {
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (is_sorted(arr, n)) {
        printf("SORTED");
    } else {
        printf("UNSORTED");
    }
    return 0;
}

int is_sorted(int array[], int size) {
    int i;
    for (i = 0; i < size-1; i++) {
        if (array[i] > array[i+1]) {
            return 0;
        }
    }
    return 1;
}
