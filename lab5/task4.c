#include <stdio.h>

int main() {
    int choice, n, i;
    
    while (1) {   // infinite loop until Exit
        printf("\n=== MENU ===\n");
        printf("1. Multiplication Table\n");
        printf("2. Even Numbers up to N\n");
        printf("3. Factorial of a Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Multiplication table
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Multiplication Table of %d:\n", n);
                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", n, i, n * i);
                }
                break;

            case 2: // Even numbers
                printf("Enter the limit: ");
                scanf("%d", &n);
                printf("Even numbers up to %d:\n", n);
                for (i = 2; i <= n; i += 2) {
                    printf("%d ", i);
                }
                printf("\n");
                break;

            case 3: // Factorial
                printf("Enter a number: ");
                scanf("%d", &n);
                int fact = 1;
                for (i = 1; i <= n; i++) {
                    fact *= i;
                }
                printf("Factorial of %d = %d\n", n, fact);
                break;

            case 4: // Exit
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
