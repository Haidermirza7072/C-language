#include <stdio.h>

void main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 0; j < i; j++) {
            printf("%d ", 41 + j);
        }
        printf("\n");
    }
}

