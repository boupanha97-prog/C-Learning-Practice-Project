// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int dec=0, remain, i=0;
    
    printf("Input Binary: ");
    scanf("%lld", &binary);
    
    while(binary>0){
        remain= binary % 10;
        dec += remain*pow(2,i);
        binary= binary/10;
        i++;
    }
    
    printf("---------------\n");
    printf("Output Dec: %d", dec);
    return 0;
}
