#include <stdio.h>

int main() {
    int n;
    double scalar;
    printf("Enter vector dimension N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    double v1[100], v2[100], sum[100], diff[100], scaled[100];
    printf("Enter elements of Vector 1:\n");
    for (int i = 0; i < n; i++) scanf("%lf", &v1[i]);

    printf("Enter elements of Vector 2:\n");
    for (int i = 0; i < n; i++) scanf("%lf", &v2[i]);

    printf("Enter Scalar value: ");
    scanf("%lf", &scalar);

    for (int i = 0; i < n; i++) {
        sum[i] = v1[i] + v2[i];
        diff[i] = v1[i] - v2[i];
        scaled[i] = v1[i] * scalar;
    }

    printf("______________\n");
    printf("Vector Sum (V1 + V2): [ ");
    for (int i = 0; i < n; i++) printf("%.2lf ", sum[i]);
    printf("]\n");

    printf("Vector Subtraction (V1 - V2): [ ");
    for (int i = 0; i < n; i++) printf("%.2lf ", diff[i]);
    printf("]\n");

    printf("Scalar Product (%.2lf * V1): [ ", scalar);
    for (int i = 0; i < n; i++) printf("%.2lf ", scaled[i]);
    printf("]\n");

    return 0;
}
