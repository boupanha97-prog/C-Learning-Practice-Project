#include <stdio.h>

int main() {
    int n, choice;
    printf("Enter vector dimension N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    double v1[100], v2[100];
    printf("Enter elements of Vector 1:\n");
    for (int i = 0; i < n; i++) scanf("%lf", &v1[i]);

    printf("Enter elements of Vector 2:\n");
    for (int i = 0; i < n; i++) scanf("%lf", &v2[i]);

    do {
        printf("\n=== Vector Operations Menu ===\n");
        printf("1. Vector Sum (V1 + V2)\n");
        printf("2. Vector Subtraction (V1 - V2)\n");
        printf("3. Scalar Multiplication (k * V1)\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Sum: [ ");
                for (int i = 0; i < n; i++) printf("%.2lf ", v1[i] + v2[i]);
                printf("]\n");
                break;
            case 2:
                printf("Difference: [ ");
                for (int i = 0; i < n; i++) printf("%.2lf ", v1[i] - v2[i]);
                printf("]\n");
                break;
            case 3: {
                double k;
                printf("Enter scalar k: ");
                scanf("%lf", &k);
                printf("Scaled V1: [ ");
                for (int i = 0; i < n; i++) printf("%.2lf ", k * v1[i]);
                printf("]\n");
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
