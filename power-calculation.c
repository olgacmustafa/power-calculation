#include <stdio.h>

int main() {
    int base, exponent, result;
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is %d.\n", base, exponent, result);

    return 0;
}

