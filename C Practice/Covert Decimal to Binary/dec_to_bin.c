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

    printf("_______________\n");
    printf("Output Binary: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
