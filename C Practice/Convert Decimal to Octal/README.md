# 🔢 Decimal to Octal Converter

Converts base-10 decimal numbers into base-8 octal representation.

## 📄 Source File
- [`dec_to_octal.c`](dec_to_octal.c)

## 🚀 Compilation & Execution
```powershell
gcc dec_to_octal.c -o dec_to_octal
.\dec_to_octal
```

## 📊 Expected Output Results
```text
Input Dec: 83
---------------
Output Bin: 123
```

## 🔍 Source Code Explanation

The program [`dec_to_octal.c`](dec_to_octal.c) performs base-10 to base-8 (octal) conversion:
1. **Input**: Reads a decimal integer `dec` from standard input.
2. **Successive Division by 8**:
   A `while(dec > 0)` loop processes the input:
   - **Remainder**: Obtains the base-8 remainder via `dec % 8`, and stores it in the `octal` array.
   - **Divide**: Updates the decimal value via `dec = dec / 8`.
   - **Counter**: Increments the array position tracking variable `i`.
3. **Reversed Loop Printing**:
   Prints the calculated remainders from the last index (`i - 1`) down to `0` to render the correct octal representation. *(Note: The print header reads "Output Bin:", but it correctly outputs the base-8 octal values).*


