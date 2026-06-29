#include <stdio.h>

int main() {
    long long bin;
    int dec = 0, i = 0, rem;

    printf("Input Binary: ");
    if (scanf("%lld", &bin) != 1) return 0;

    long long temp = bin;
    while (temp != 0) {
        rem = temp % 10;
        temp /= 10;
        dec += rem * (1 << i);
        i++;
    }

    printf("______________\n");
    printf("Output Decimal: %d\n", dec);

    return 0;
}
