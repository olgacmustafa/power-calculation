# Power Calculation in C

This is a simple C program that calculates the power of a number.  
It takes a base and an exponent from the user and returns the result using a `for` loop.

## Features

- Takes user input for base and exponent
- Calculates base^exponent
- Prints the result on the screen

## Example

Enter base: 2
Enter exponent: 4
Result: 16

## How to Run

1. Copy the code into a file named `power_calculation.c`
2. Compile it with a C compiler like GCC:
## Code
```C
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
