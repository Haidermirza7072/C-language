#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, firstDigit;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store the original number
    lastDigit = num % 10;  // Get the last digit

    // Remove digits until we get the first digit
    while (num >= 10) {
        num = num / 10;
    }

    firstDigit = num;  // Now num contains the first digit

    int sum = firstDigit + lastDigit;

    printf("First digit: %d\n", firstDigit);
    printf("Last digit: %d\n", lastDigit);
    printf("Sum of first and last digit of %d = %d\n", originalNum, sum);

    return 0;
}
