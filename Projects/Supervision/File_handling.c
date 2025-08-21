#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int i;

    
    evenFile = fopen("even.txt", "w");
    oddFile = fopen("odd.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files!\n");
        return 1;
    }

    
    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d\n", i);  // write even number
        } else {
            fprintf(oddFile, "%d\n", i);   // write odd number
        }
    }

    printf("Even and odd numbers written to even.txt and odd.txt successfully.\n");

    
    fclose(evenFile);
    fclose(oddFile);

    return 0;
}
