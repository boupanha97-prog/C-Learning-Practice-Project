#include <stdio.h>

int main() {
    printf("Compilation Date : %s\n", __DATE__);
    printf("Compilation Time : %s\n", __TIME__);

#ifdef __STDC_VERSION__
    printf("C Standard       : %ldL\n", __STDC_VERSION__);
#else
    printf("C Standard       : Not defined (pre-C90/ANSI C mode)\n");
#endif

    return 0;
}