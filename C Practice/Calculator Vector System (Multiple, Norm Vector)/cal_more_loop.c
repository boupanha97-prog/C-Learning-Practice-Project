#include <stdio.h>
#include <math.h>

int main() {
    int U[3] = {1,2,-3};
    int V[3] = {-2,3,-1};
    int W[3] = {4,2,-5};
    int s=0,s1=0,s2=0,s3=0,s4=0,s5=0;

    for(int i=0; i<3; i++){
        s= s+U[i]*V[i];
    }
    printf("\nVector UxV = %d", s);

    for(int i=0; i<3; i++){
        s1=s1+V[i]*W[i];
    }
    printf("\nVector VxW = %d", s1);

    for(int i=0; i<3; i++){
        s2=s2+U[i]*W[i];
    }
    printf("\nVector UxW = %d", s2);
   
    for(int i=0; i<3; i++){
        s3=s3+U[i]*U[i];
    }
    printf("\nVector ||U||= sqrt(%d) = %.2f", s3, sqrt(s3));
    
    for(int i=0; i<3; i++){
        s4=s4+V[i]*V[i];
    }
    printf("\nVector ||V||= sqrt(%d) = %.2f", s4, sqrt(s4));

    for(int i=0; i<3; i++){
        s5=s5+W[i]*W[i];
    }
    printf("\nVector ||W||= sqrt(%d) = %.2f\n", s5, sqrt(s5));

    return 0;
}
