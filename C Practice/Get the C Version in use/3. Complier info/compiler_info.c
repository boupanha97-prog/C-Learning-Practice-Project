#include <stdio.h>

int main(){

    #if defined(__clang__)
        printf("Compiler : Clang\n");
        printf("Version : %d.%d.%d\n", __clang_major__, __clang_major__, __clang_patchlevel__);
    #elif defined(__GNUC__)
        printf("Compiler : GCC\n");
        printf("Version : %d.%d.%d\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    #elif defined(_MSC_VER)
        printf("Compiler : Microsoft Visual C++\n");
        printf("Version : %d\n", _MSC_VER);
    #else
        printf("Compiler : Unknown / not detected by this program\n");
    #endif
        
    return 0;
}