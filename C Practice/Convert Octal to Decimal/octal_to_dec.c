#include <stdio.h>
#include <math.h>

int main() {
   long long octal;
   int dec=0, remain, i=0;
   
   printf("Input Binary: ");
   scanf("%lld", &octal);
   
   while(octal>0){
       remain= octal%10;
       dec += remain*pow(8,i);
       octal= octal/10;
       i++;
   }
   
   printf("--------------\n");
   printf("Output Dec: %d", dec);
    return 0;
}
