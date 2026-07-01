#include <stdio.h>

int main() {
    int dec, i=0;
    int hex[30];
    printf("Input Dec: ");
    scanf("%d", &dec);
    
    while(dec>0){
        hex[i]= dec%16;
        dec = dec/16;
        i++;
    }

    printf(".......................\n");
    printf("Output Hex: ");
    
    for(int j=i-1; j>=0; j--){
        if(hex[j]==10)printf("A");
        else if(hex[j]==11)printf("B");
        else if(hex[j]==12)printf("C");
        else if(hex[j]==13)printf("D");
        else if(hex[j]==14)printf("E");
        else if(hex[j]==15)printf("F");
        else printf("%d", hex[j]);
    }
    return 0;
}