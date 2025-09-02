#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // print spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
