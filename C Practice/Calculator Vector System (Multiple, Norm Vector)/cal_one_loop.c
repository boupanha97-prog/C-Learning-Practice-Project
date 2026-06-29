#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter vector dimension N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    double v1[100], v2[100];
    printf("Enter elements of Vector 1:\n");
    for (int i = 0; i < n; i++) scanf("%lf", &v1[i]);

    printf("Enter elements of Vector 2:\n");
    for (int i = 0; i < n; i++) scanf("%lf", &v2[i]);

    double dot_product = 0.0, norm1 = 0.0, norm2 = 0.0;
    for (int i = 0; i < n; i++) {
        dot_product += v1[i] * v2[i];
        norm1 += v1[i] * v1[i];
        norm2 += v2[i] * v2[i];
    }

    printf("______________\n");
    printf("Dot Product (V1 . V2): %.2lf\n", dot_product);
    printf("Norm of Vector 1 ||V1||: %.2lf\n", sqrt(norm1));
    printf("Norm of Vector 2 ||V2||: %.2lf\n", sqrt(norm2));

    return 0;
}
