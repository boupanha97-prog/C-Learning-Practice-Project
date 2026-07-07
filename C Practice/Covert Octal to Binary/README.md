# 🔢 Octal to Binary Converter

Converts base-8 octal numbers into binary representation.

## 📄 Source File
- [`octal_to_bin.c`](octal_to_bin.c)

## 🚀 Compilation & Execution
```powershell
gcc octal_to_bin.c -o octal_to_bin
.\octal_to_bin
```

## 📊 Expected Output Results
```text
Input Octal: 123
--------------
Output binary: 1010011
```

## 🔍 Source Code Explanation

The program [`octal_to_bin.c`](octal_to_bin.c) performs a two-step base translation (Octal $\rightarrow$ Decimal $\rightarrow$ Binary):

1. **Step 1: Octal to Decimal**:
   - Reads the input octal value as a `long long` variable.
   - Extracts octal digits from right to left using `octal % 10`, multiplies them by powers of 8 (`pow(8, i)`), and sums them into a decimal variable `dec`.
2. **Step 2: Decimal to Binary**:
   - Converts the intermediate base-10 value `dec` into binary.
   - Divides `dec` continuously by 2: `binary[i] = dec % 2` extracts binary bits, and `dec = dec / 2` updates the decimal value.
   - The remainders are stored in the `binary` integer array.
3. **Output**: Prints the remainder values in reverse order (from `i-1` down to `0`) to output the correct binary sequence.


