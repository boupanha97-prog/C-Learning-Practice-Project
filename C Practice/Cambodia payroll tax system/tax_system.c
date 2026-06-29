#include <stdio.h>

int main() {
    
    int ts; //Taxable salary
    int tax_r; //Tax Rate
    int dc; //Dependent child
    int aa; //Additional allowance
    int tax_obc; //Tax overpayments by class
    int adc; //Allowance Dependent child
    int stb; //Salary tax base
    int py; //Payroll tax
    int total_sat; //Total salary after tax
    
    printf("Cambodian payroll tax system \n");
    
    printf("Input your salary: ");
    scanf("%d", &ts);
       
    printf("Input your dependent child: ");
    scanf("%d", &dc);
    
    printf("Input your additional allowance: ");
    scanf("%d", &aa);
    
    adc = dc * 150000;
    stb = ts - adc - aa;
   
    if ( stb <= 1500000 ){
        tax_r = 0;
        tax_obc = 0;
    }
    else if ( stb <= 2000000 ){
        tax_r = 5;
        tax_obc = 75000;
    }
    else if ( stb <= 8500000 ){
        tax_r = 10;
        tax_obc = 175000;
    }
    else if ( stb <= 125000000 ){
        tax_r = 15;
        tax_obc = 600000;
    }
    else{
        tax_r = 20;
        tax_obc = 1225000;
    }
    
    printf("Tax Rate: %d%%\n", tax_r);
    printf("Tax overpayments by class: %d\n", tax_obc);
    printf("Allowance dependent child: %d\n", adc);
    printf("Salary tax base: %d\n", stb);
    printf("Payroll tax: %d\n", py = ((stb * tax_r) / 100) - tax_obc);
    printf("Total salary after tax: %d\n", total_sat = ts - py);
    
    return 0;
}
