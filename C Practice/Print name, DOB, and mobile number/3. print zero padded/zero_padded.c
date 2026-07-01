#include <stdio.h>
#include <string.h>

    void printZeroPadded(const char*label, const char*value, int width){
        
        int len = strlen(value);
        int padding = width - len;
        if(padding < 0) padding =0;
        
        printf("%-15s: ", label);
        for(int i=0; i<padding; i++){
            putchar('0');
        }
        printf("%s\n", value);
    }
    
    int main(){
        char fullname[] = "Bou Panha";
        char dob[] = "12-March-2006";
        char mobile[] = "123456789";
        
        printZeroPadded("Full Name", fullname, 20);
        printZeroPadded("Date of Birth", dob, 20);
        printZeroPadded("Mobile Number", mobile, 20);

        return 0;
    }
