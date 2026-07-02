#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printUppercase(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toupper((unsigned char)str[i]));
    }
}

void printMaskedMobile(const char *mobile) {
    int len = strlen(mobile);
    for (int i = 0; i < len; i++) {
        // Mask middle digits
        if (i >= 3 && i < len - 3) {
            putchar('*');
        } else {
            putchar(mobile[i]);
        }
    }
}

int main() {
    char fullname[] = "Bou Panha";
    char dob[] = "15-07-1996";
    char mobile[] = "12345676789";

    printf("%-15s: ", "Full Name");
    printUppercase(fullname);
    printf("\n");

    printf("%-15s: %s\n", "Date of Birth", dob);

    printf("%-15s: ", "Mobile Number");
    printMaskedMobile(mobile);
    printf("\n");

    return 0;
}
