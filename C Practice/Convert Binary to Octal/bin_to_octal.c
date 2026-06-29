#include <stdio.h>

int main() {
    long long bin;
    int dec = 0, i = 0, rem, octal[50], oct_idx = 0;

    printf("Input Binary: ");
    if (scanf("%lld", &bin) != 1) return 0;

    long long temp = bin;
    while (temp != 0) {
        rem = temp % 10;
        temp /= 10;
        dec += rem * (1 << i);
        i++;
    }

    if (dec == 0) {
        printf("Output Octal: 0\n");
        return 0;
    }

    while (dec > 0) {
        octal[oct_idx++] = dec % 8;
        dec /= 8;
    }

    printf("______________\n");
    printf("Output Octal: ");
    for (int j = oct_idx - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");

    return 0;
}
