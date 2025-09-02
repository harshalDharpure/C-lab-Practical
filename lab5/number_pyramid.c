#include <stdio.h>

int main() {
    int rows, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {      // loop for rows
        for (j = 1; j <= i; j++) {    // loop for numbers in each row
            printf("%d ", j);
        }
        printf("\n");  // move to next line after each row
    }

    return 0;
}
