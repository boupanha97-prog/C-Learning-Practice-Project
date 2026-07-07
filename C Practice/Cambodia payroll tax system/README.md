# 🇰🇭 Cambodian Payroll Tax System

A financial utility written in C that calculates the monthly salary tax base, dependent child allowances, and progressive tax slabs based on Cambodian tax rates.

## 📄 Source File
- [`tax_system.c`](tax_system.c)

## 🚀 Compilation & Execution
```powershell
gcc tax_system.c -o tax_system
.\tax_system
```

## 📊 Expected Output Results
```text
Cambodian payroll tax system 
Input your salary: 2500000
Input your dependent child: 1
Input your additional allowance: 200000
Tax Rate: 10%
Tax overpayments by class: 175000
Allowance dependent child: 150000
Salary tax base: 2150000
Payroll tax: 40000
Total salary after tax: 2460000
```

## 🔍 Source Code Explanation

The program [`tax_system.c`](tax_system.c) implements the logic for calculating Cambodian monthly salary tax:

1. **Input Variables**:
   - `ts`: Monthly Gross Salary.
   - `dc`: Count of dependent children.
   - `aa`: Additional taxable allowance (like transport/meal allowances).
2. **Tax Base Calculation (`stb`)**:
   - Calculates the dependent children allowance (`adc = dc * 150000` KHR per child).
   - Computes the Salary Tax Base: `stb = ts - adc - aa`.
3. **Progressive Bracket Classification**:
   Uses an `if-else if` block based on the calculated Salary Tax Base (`stb`) to find the corresponding Tax Rate (`tax_r`) and cumulative adjustment offset ("Tax Overpayments by Class", `tax_obc`):
   - **Base <= 1,500,000 KHR**: 0% Tax, 0 KHR offset.
   - **1,500,001 to 2,000,000 KHR**: 5% Tax, 75,000 KHR offset.
   - **2,000,001 to 8,500,000 KHR**: 10% Tax, 175,000 KHR offset.
   - **8,500,001 to 12,500,000 KHR**: 15% Tax, 600,000 KHR offset.
   - **Above 12,500,000 KHR**: 20% Tax, 1,225,000 KHR offset.
4. **Calculations & Output**:
   - **Payroll Tax (`py`)**: Calculated using the standard formula: `py = ((stb * tax_r) / 100) - tax_obc`.
   - **Net Salary (`total_sat`)**: `ts - py`.


