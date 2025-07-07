#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter size of 1D array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements are: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("0");
    }

    printf("\n");
    return 0;
}
