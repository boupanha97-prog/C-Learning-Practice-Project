#include <stdio.h>
#include <math.h>

int main() {
   long long octal;
   int dec=0, remain, i=0;
   int binary[20];
   
   printf("Input Octal: ");
   scanf("%lld", &octal);
   
   while(octal>0){
       remain= octal%10;
       dec += remain*pow(8,i);
       octal= octal/10;
       i++;
   }
   
   i=0;
   while(dec>0){
       binary[i]= dec%2;
       dec= dec/2;
       i++;
   }
   
   printf("--------------\n");
   printf("Output binary: ");
   
   for(int j=i-1; j>=0; j--){
        printf("%d", binary[j]);
   }
    return 0;
}
