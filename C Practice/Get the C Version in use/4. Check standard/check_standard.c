#include <stdio.h>

int main() {
#if defined(__STDC_VERSION__)
    #if __STDC_VERSION__ >= 201710L
        printf("Compiled under C17/C18 (or a later standard).\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("Compiled under C11.\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("Compiled under C99.\n");
    #else
        printf("Compiled under an older C standard (pre-C99).\n");
    #endif
#else
    printf("__STDC_VERSION__ is not defined; likely C90/ANSI C mode.\n");
#endif

    return 0;
}