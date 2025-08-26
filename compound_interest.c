#include <stdio.h>
#include <math.h>

int main() {
    double P, R, T, CI;

    printf("Enter principal amount: ");
    scanf("%lf", &P);

    printf("Enter annual rate of interest (in %%): ");
    scanf("%lf", &R);

    printf("Enter time in years: ");
    scanf("%lf", &T);

    // Formula: CI = P * ( (1 + R/100)^T - 1 )
    CI = P * (pow((1 + R / 100), T) - 1);

    printf("The Compound Interest is: %.2lf\n", CI);

    return 0;
}
