#include <stdio.h>

int main() {
    int dec, i;
    int octal[50];
    
    printf("Input Dec: ");
    scanf("%d", &dec);
    i=0;
    
    while(dec>0){
        octal[i]= dec%8;
        dec= dec/8;
        i=i+1;
    }
    
    printf("---------------\n");
    printf("Output Bin: ");
    
    for(int j=i-1; j>=0; j--){
        printf("%d", octal[j]);
    }
    
    return 0;
}
