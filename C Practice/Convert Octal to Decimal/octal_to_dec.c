#include <stdio.h>

int main() {
    int octal;
    int dec = 0, base = 1;

    printf("Input Octal: ");
    if (scanf("%d", &octal) != 1) return 0;

    int temp = octal;
    while (temp > 0) {
        int last_digit = temp % 10;
        temp /= 10;
        dec += last_digit * base;
        base *= 8;
    }

    printf("______________\n");
    printf("Output Decimal: %d\n", dec);

    return 0;
}
