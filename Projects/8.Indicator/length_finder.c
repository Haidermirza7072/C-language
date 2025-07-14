#include <stdio.h>

int findLength(char *ptr) {
    int length = 0;
    while (*(ptr + length) != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);  // Reads input with spaces

    int len = findLength(str);

    if (str[len - 1] == '\n') len--;

    printf("The length of a string is: %d\n", len);

    return 0;
}