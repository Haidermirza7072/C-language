#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {

        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        int spaces = (5 - i) * 2;
        for(j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }
}
