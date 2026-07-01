// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int dec=0, remain, i=0;
    int octal[20];
    
    printf("Input Binary: ");
    scanf("%lld", &binary);
    
    while(binary>0){
        remain= binary % 10;
        dec += remain*pow(2,i);
        binary = binary/10;
        i++;
    }
    
    i=0;
    while(dec>0){
        octal[i]= dec%8;
        dec= dec/8;
        i=i+1;
    }
    
    printf("---------------\n");
    printf("Output octal: ");
    
    for(int j=i-1; j>=0; j--){
        printf("%d", octal[j]);
    }

    return 0;
}