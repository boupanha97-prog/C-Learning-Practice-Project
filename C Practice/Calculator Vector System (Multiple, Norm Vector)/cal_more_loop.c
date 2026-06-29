#include <stdio.h>
#include <math.h>

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
        printf("\n=== Vector Calculator Menu ===\n");
        printf("1. Calculate Dot Product (V1 . V2)\n");
        printf("2. Calculate Norm of Vector 1 (||V1||)\n");
        printf("3. Calculate Norm of Vector 2 (||V2||)\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                double dot = 0;
                for (int i = 0; i < n; i++) dot += v1[i] * v2[i];
                printf("Dot Product = %.2lf\n", dot);
                break;
            }
            case 2: {
                double norm = 0;
                for (int i = 0; i < n; i++) norm += v1[i] * v1[i];
                printf("Norm ||V1|| = %.2lf\n", sqrt(norm));
                break;
            }
            case 3: {
                double norm = 0;
                for (int i = 0; i < n; i++) norm += v2[i] * v2[i];
                printf("Norm ||V2|| = %.2lf\n", sqrt(norm));
                break;
            }
        }
    } while (choice != 0);

    return 0;
}
