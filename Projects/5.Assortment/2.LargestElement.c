#include <stdio.h>

int main() {
    int row, col;

    printf("Enter rows:");
    scanf("%d", &row);
    printf("Enter columns:");
    scanf("%d", &col);

    int arr2D[row][col];

    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr2D[i][j]);
        }
    }

    int max = arr2D[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr2D[i][j] > max) {
                max = arr2D[i][j];
            }
        }
    }

    printf("Largest element is: %d\n", max);
    
    return 0;
}
