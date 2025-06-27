#include <stdio.h>

int main() {
    int i, j, val;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < i; j++) {
            printf("  ");
        }
        for(j = 0; j < 5 - i; j++) {
            val = (j % 2 == 0) ? 1 : 0;
            printf("%d ", val);
        }
        printf("\n");
    }
}
