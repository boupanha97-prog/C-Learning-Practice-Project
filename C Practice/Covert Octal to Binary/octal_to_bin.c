#include <stdio.h>

int main() {
    int octal;
    int dec = 0, base = 1;
    int binary[50], i = 0;

    printf("Input Octal: ");
    if (scanf("%d", &octal) != 1) return 0;

    int temp = octal;
    while (temp > 0) {
        int last_digit = temp % 10;
        temp /= 10;
        dec += last_digit * base;
        base *= 8;
    }

    if (dec == 0) {
        printf("Output Binary: 0\n");
        return 0;
    }

    while (dec > 0) {
        binary[i++] = dec % 2;
        dec /= 2;
    }

    printf("______________\n");
    printf("Output Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
