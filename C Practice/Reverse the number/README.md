# 🔄 Reverse The Number

A foundational algorithm in C that extracts digits using modulo arithmetic (`% 10`) and prints an integer input in reverse order.

## 📄 Source File
- [`Reverse_number.c`](Reverse_number.c)

## 🚀 Compilation & Execution
```powershell
gcc Reverse_number.c -o Reverse_number
.\Reverse_number
```

## 📊 Expected Output Results
```text
N : 12345
54321
```

## 🔍 Source Code Explanation

The program [`Reverse_number.c`](Reverse_number.c) reverses an integer digit-by-digit:
1. **Input**: Prompts the user to enter an integer `N`.
2. **Reversal Loop**:
   A `while(n != 0)` loop processes the integer value:
   - **Extract and Print Digit**: Evaluates `n % 10` to get the last digit of the current value of `n`, and immediately prints it to standard output.
   - **Shift Value**: Divides `n` by 10 (`n /= 10`) to discard the processed rightmost digit.
3. **Execution**:
   This approach prints the digits in reverse order dynamically without storing them in a string or array, or calculating a new numeric value (avoiding potential integer overflow issues).


