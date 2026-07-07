# 🔢 Binary to Octal Converter

Converts binary numbers into base-8 octal representation via intermediate base expansion.

## 📄 Source File
- [`bin_to_octal.c`](bin_to_octal.c)

## 🚀 Compilation & Execution
```powershell
gcc bin_to_octal.c -o bin_to_octal
.\bin_to_octal
```

## 📊 Expected Output Results
```text
Input Binary: 11011
---------------
Output octal: 33
```

## 🔍 Source Code Explanation

The program [`bin_to_octal.c`](bin_to_octal.c) performs a two-step base translation (Binary $\rightarrow$ Decimal $\rightarrow$ Octal):

1. **Step 1: Binary to Decimal**:
   - Reads the input binary sequence as a `long long` variable.
   - Extracts binary digits from right to left using `binary % 10`, multiplies them by powers of 2 (`pow(2, i)`), and sums them into a decimal variable `dec`.
2. **Step 2: Decimal to Octal**:
   - Converts the intermediate base-10 value `dec` into octal.
   - Divides `dec` continuously by 8: `octal[i] = dec % 8` extracts the octal remainders, and `dec = dec / 8` updates the decimal value.
   - The remainders are stored in the `octal` integer array.
3. **Output**: Prints the remainder values in reverse order (from `i-1` down to `0`) to reconstruct the correct octal representation.


