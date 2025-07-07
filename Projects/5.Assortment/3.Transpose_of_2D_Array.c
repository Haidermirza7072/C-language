#include <stdio.h>

int main() {

    int row, col;
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter columns: ");
    scanf("%d", &col);
    int arr[row][col], transpose[col][row];

    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
