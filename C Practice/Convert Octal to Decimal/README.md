# 🔢 Octal to Decimal Converter

Converts base-8 octal values into base-10 decimal representation using positional expansion.

## 📄 Source File
- [`octal_to_dec.c`](octal_to_dec.c)

## 🚀 Compilation & Execution
```powershell
gcc octal_to_dec.c -o octal_to_dec
.\octal_to_dec
```

## 📊 Expected Output Results
```text
Input Binary: 123
--------------
Output Dec: 83
```

## 🔍 Source Code Explanation

The program [`octal_to_dec.c`](octal_to_dec.c) converts a base-8 octal representation to its base-10 decimal equivalent:
1. **Input**: Reads the input octal value as a long integer (`octal`). *(Note: The print statement reads "Input Binary:", but it accepts base-8 octal inputs).*
2. **Positional Conversion**:
   A `while(octal > 0)` loop processes the octal number from right to left:
   - **Extract Digit**: Isolates the rightmost octal digit using modulo 10 (`remain = octal % 10`).
   - **Scale & Accumulate**: Multiplies `remain` by 8 raised to the power of its position index `i` (`pow(8, i)`) and adds it to the running sum `dec`.
   - **Shift Left**: Divides the `octal` value by 10 (`octal = octal / 10`) to shift and discard the processed rightmost digit.
   - **Increment**: Increments the index `i++`.
3. **Output**: Prints the final converted decimal value `dec`.


