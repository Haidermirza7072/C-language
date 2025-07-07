#include <stdio.h>

int main() {
    int row, col;

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int rowNum;
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    if (rowNum < 0 || rowNum >= row) {
        printf("Invalid row number.\n");
        return 1;
    }

    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for (int j = 0; j < col; j++) {
        printf("%d", arr[rowNum][j]);
        rowSum += arr[rowNum][j];
        if (j < col - 1) printf(", ");
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    int colNum;
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    if (colNum < 0 || colNum >= col) {
        printf("Invalid column number.\n");
        return 1;
    }

    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for (int i = 0; i < row; i++) {
        printf("%d", arr[i][colNum]);
        colSum += arr[i][colNum];
        if (i < row - 1) printf(", ");
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
