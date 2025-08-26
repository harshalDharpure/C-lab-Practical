#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float x = 5.75, y;
    double d = 12345.6789;

    // Implicit casting (int -> float)
    y = a / b;  // integer division, result is int but stored in float
    printf("Implicit casting (int/int stored in float): y = %f\n", y);

    // Explicit casting (int -> float)
    y = (float)a / b; 
    printf("Explicit casting (float)a/b: y = %f\n", y);

    // Float -> int (narrowing conversion)
    int z = (int)x;
    printf("Explicit casting (float -> int): %f -> %d\n", x, z);

    // Double -> int (narrowing conversion, fraction lost)
    int big = (int)d;
    printf("Double to int (narrowing): %lf -> %d\n", d, big);

    // Mixed arithmetic
    float result = a + x; // int + float = float
    printf("Mixed arithmetic (int + float): %d + %.2f = %.2f\n", a, x, result);

    return 0;
}
