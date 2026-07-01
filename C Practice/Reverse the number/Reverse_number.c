#include <stdio.h>

int main() {
    // Write C code here
    int n,revers;
    printf("N :");
    scanf("%d",&n);
    while(n!=0){
        printf("%d",n%10);
        n/=10;
    }

    return 0;
}
