#include <stdio.h>

int main() {
    int n;
    printf("N :");
    scanf("%d", &n);
    printf("100$ =%d សន្លឹក", n / 100);
    n -= n / 100 * 100;
    printf("\n50$ =%d សន្លឹក", n / 50);
    n -= n / 50 * 50;
    printf("\n20$ =%d សន្លឹក", n / 20);
    n -= n / 20 * 20;
    printf("\n10$ =%d សន្លឹក", n / 10);
    n -= n / 10 * 10;
    printf("\n 1$ =%d សន្លឹក", n / 1);

    return 0;
}
