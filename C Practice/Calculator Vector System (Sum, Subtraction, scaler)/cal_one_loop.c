#include <stdio.h>

int main() {
    int U[3] = {1,2,-3};
    int V[3] = {-2,3,-1};
    int W[3] = {4,2,-5};
    int a[3], b[3], c[3], d[3], e[3], f[3], g[3];
    
    for(int i=0; i<3; i++){
        a[i]= U[i]+V[i];
        b[i]= U[i]+W[i];
        c[i]= V[i]+W[i];
        d[i]= U[i]-V[i];
        e[i]= U[i]-W[i];
        f[i]= (2*V[i])-(3*U[i]);
        g[i]= (2*U[i])+(3*V[i])-(4*W[i]);
    }
    printf("Vector U+V = (%d, %d, %d)", a[0], a[1], a[2]);
    printf("\nVector U+W = (%d, %d, %d)", b[0], b[1], b[2]);
    printf("\nVector V+W = (%d, %d, %d)", c[0], c[1], c[2]);
    printf("\nVector U-V = (%d, %d, %d)", d[0], d[1], d[2]);
    printf("\nVector U-W = (%d, %d, %d)", e[0], e[1], e[2]);
    printf("\nVector 2V-3U = (%d, %d, %d)", f[0], f[1], f[2]);
    printf("\nVector 2U+3V-4W = (%d, %d, %d)\n", g[0], g[1], g[2]);
    return 0;
}
