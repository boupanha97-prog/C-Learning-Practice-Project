// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    int dec, i;
    int binary[50];
    
    printf("Input Dec: ");
    scanf("%d", &dec);
    i=0;
    
    while(dec>0){
        binary[i]= dec%2;
        dec= dec/2;
        i=i+1;
    }
    
    printf("---------------\n");
    printf("Output Bin: ");
    
    for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
    return 0;
}
