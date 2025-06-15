#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is 0, it has 1 digit
    if (num == 0) {
        count = 1;
    } else {
        // Handle negative numbers
        if (num < 0) {
            num = -num;
        }

        while (num != 0) {
            num = num / 10;  // Remove last digit
            count++;         // Increment digit count
        }
    }

    printf("Total digits: %d\n", count);

    return 0;
}
