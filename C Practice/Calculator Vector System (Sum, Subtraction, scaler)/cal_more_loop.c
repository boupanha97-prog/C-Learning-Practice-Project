#include <stdio.h>

int main() {
    int U[3] = {1,2,-3};
    int V[3] = {-2,3,-1};
    int W[3] = {4,2,-5};
    
    printf("Vector U+V = ");
    for(int i=0; i<3; i++){
        printf("%d ", U[i]+V[i]);
    }
    
    printf("\nVector U+W = ");
    for(int i=0; i<3; i++){
        printf("%d ", U[i]+W[i]);
    }   

    printf("\nVector V+W = ");
    for(int i=0; i<3; i++){
        printf("%d ", V[i]+W[i]);
    }
    
    printf("\nVector U-V = ");
    for(int i=0; i<3; i++){
        printf("%d ", U[i]-V[i]);
    }

    printf("\nVector U-W = ");
    for(int i=0; i<3; i++){
        printf("%d ", U[i]-W[i]);
    }

    printf("\nVector 2V-3U = ");
    for(int i=0; i<3; i++){
        printf("%d ", (2*V[i])-(3*U[i]));
    }

    printf("\nVector 2U+3V-4W = ");
    for(int i=0; i<3; i++){
        printf("%d ", (2*U[i])+(3*V[i])-(4*W[i]));
    }
    printf("\n");

    return 0;
}
