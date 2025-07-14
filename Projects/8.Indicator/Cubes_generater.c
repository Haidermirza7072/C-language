#include <stdio.h>

int cube(int num) {
    return num * num * num;
}

void generateCubes(int *ptr, int rows, int cols) {
    printf("Cubes of all elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int val = *(ptr + i * cols + j);
            printf("%d ", cube(val));
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter array's size (n for n x n): ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    generateCubes(&arr[0][0], size, size);

    return 0;
}