#include <stdio.h>
#include <math.h>

int main() {
    char fullname[] = "Bou Panha";
    char dob[] = "15-09-1995";
    char mobile[] = "123456789";
    
    printf("%-15s: %25s\n", "Full Name", fullname);
    printf("%-15s: %25s\n", "Date of Birth", dob);
    printf("%-15s: %25s\n", "Mobile Number", mobile);
    
    return 0;
}