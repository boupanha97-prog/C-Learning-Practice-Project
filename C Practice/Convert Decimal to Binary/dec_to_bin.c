#include <stdio.h>

int main() {
    int dec, i = 0;
    int binary[50];

    printf("Input Dec: ");
    scanf("%d", &dec);

    if (dec == 0) {
        printf("Output Binary: 0\n");
        return 0;
    }

    while (dec > 0) {
        binary[i] = dec % 2;
        dec = dec / 2;
        i++;
    }

    printf("_____________\n");
    printf("Output Binary: ");

    for (int j0=i-1; j0>=0; j0--) {
        printf("%d", binary[j0]);
    }
    printf("\n");

    return 0;
}
