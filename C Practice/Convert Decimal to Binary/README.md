# 🔢 Decimal to Binary Converter

Converts positive decimal integers into binary representation using modulo division and array storage.

## 📄 Source File
- [`dec_to_bin.c`](dec_to_bin.c)

## 🚀 Compilation & Execution
```powershell
gcc dec_to_bin.c -o dec_to_bin
.\dec_to_bin
```

## 📊 Expected Output Results
```text
Input Dec: 27
---------------
Output Bin: 11011
```

## 🔍 Source Code Explanation

The program [`dec_to_bin.c`](dec_to_bin.c) performs standard base conversion from decimal (base-10) to binary (base-2) using the **division-by-2 method**:
1. **Input**: Reads a base-10 integer `dec` from the user.
2. **Successive Division**:
   A `while(dec > 0)` loop repeatedly divides the value:
   - **Remainder**: Calculates `dec % 2` (which evaluates to `0` or `1`) and stores it in the `binary` array.
   - **Divide**: Divides the decimal value by 2 (`dec = dec / 2`) to process the next higher bit.
   - **Counter**: Increments index `i` to track array size.
3. **Reversal Output**:
   Since the remainders are calculated from the least significant bit (LSB) to the most significant bit (MSB), the program prints the array elements in reverse order (`j = i-1` down to `0`) to yield the correct binary format.


