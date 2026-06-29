#include <stdio.h>

int main() {
    int dec;
    int octal[50], i = 0;

    printf("Input Decimal: ");
    if (scanf("%d", &dec) != 1) return 0;

    if (dec == 0) {
        printf("Output Octal: 0\n");
        return 0;
    }

    while (dec > 0) {
        octal[i++] = dec % 8;
        dec /= 8;
    }

    printf("______________\n");
    printf("Output Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");

    return 0;
}
