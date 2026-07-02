#include <stdio.h>

int main(){
    char fullname[] = "Bou Panha";
    char dob[] = "15-07-1996";
    char mobile[] = "12345676789";

    printf("%-15s %-25s %-15s %-25s\n", "Field", "Value", "Field", "Value");
    printf("%-15s %-25s %-15s %-25s\n", "Full Name:", fullname, "Date of Birth:", dob);
    printf("%-15s %-25s \n", "Mobile Number:", mobile);

    return 0;
}