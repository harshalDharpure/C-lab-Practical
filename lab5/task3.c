#include <stdio.h>

int main() {
    int i = -123;
    unsigned int u = 123;
    float f = 123.456;
    double d = 12345.6789;
    char c = 'A';
    char str[] = "Hello";
    
    printf("=============== FORMAT SPECIFIER TUTORIAL ===============\n\n");

    // Integer
    printf("Integer (%%d): %d\n", i);
    printf("Integer with width (%%5d): %5d\n", i);
    printf("Integer with leading zeros (%%05d): %05d\n\n", i);

    // Unsigned Integer
    printf("Unsigned Integer (%%u): %u\n", u);
    printf("Unsigned Integer in Octal (%%o): %o\n", u);
    printf("Unsigned Integer in Hex (%%x): %x\n", u);
    printf("Unsigned Integer in HEX (%%X): %X\n\n", u);

    // Floating Point
    printf("Float (%%f): %f\n", f);
    printf("Float with 2 decimals (%%.2f): %.2f\n", f);
    printf("Float with width and precision (%%8.3f): %8.3f\n\n", f);

    // Scientific Notation
    printf("Double in scientific notation (%%e): %e\n", d);
    printf("Double in scientific notation (%%E): %E\n", d);
    printf("Double auto format (%%g): %g\n\n", d);

    // Character
    printf("Character (%%c): %c\n\n", c);

    // String
    printf("String (%%s): %s\n", str);
    printf("String with width (%%10s): %10s\n", str);
    printf("String with precision (%%.3s): %.3s\n\n", str);

    // Pointer
    printf("Pointer (%%p): %p\n\n", (void*)&i);

    // Extended examples
    printf("=============== EXTENDED EXAMPLES ===============\n\n");

    int num = 42;
    float pi = 3.14159;

    printf("Number with sign (%%+d): %+d\n", num);
    printf("Left aligned number (%%-5d): %-5d (see alignment)\n", num);
    printf("Float with sign (%%+f): %+f\n", pi);
    printf("Float exponential short (%%.1e): %.1e\n", pi);
    printf("String left aligned (%%-10s): %-10s (see spaces)\n", str);

    printf("\n=============== END OF TUTORIAL ===============\n");

    return 0;
}
