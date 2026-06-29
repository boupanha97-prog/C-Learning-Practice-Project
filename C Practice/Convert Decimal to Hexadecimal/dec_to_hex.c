#include <stdio.h>

int main() {
    int dec;
    char hex[50];
    int i = 0;

    printf("Input Decimal: ");
    if (scanf("%d", &dec) != 1) return 0;

    if (dec == 0) {
        printf("Output Hexadecimal: 0\n");
        return 0;
    }

    while (dec > 0) {
        int temp = dec % 16;
        if (temp < 10) {
            hex[i++] = temp + '0';
        } else {
            hex[i++] = temp - 10 + 'A';
        }
        dec /= 16;
    }

    printf("______________\n");
    printf("Output Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");

    return 0;
}
