#include <stdio.h>

int main()
{
    #ifdef __STDC_VERSION__
        printf("__STDC_VERSION__is defined: %ldL\n", __STDC_VERSION__);
    #else
        printf("__STDC_VERSION__ is not defined (likely pre-C90/ANSI C mode).\n");
    #endif

    #ifdef __STDC__ 
        printf("__STDC__ is defined: %d\n", __STDC__);
    #endif

    return 0;
}