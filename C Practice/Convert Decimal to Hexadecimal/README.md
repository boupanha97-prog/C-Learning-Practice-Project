# 🔢 Decimal to Hexadecimal Converter

Converts base-10 decimal numbers into base-16 hexadecimal format (using digits `0-9` and characters `A-F`).

## 📄 Source File
- [`dec_to_hex.c`](dec_to_hex.c)

## 🚀 Compilation & Execution
```powershell
gcc dec_to_hex.c -o dec_to_hex
.\dec_to_hex
```

## 📊 Expected Output Results
```text
Input Dec: 254
.......................
Output Hex: FE
```

## 🔍 Source Code Explanation

The program [`dec_to_hex.c`](dec_to_hex.c) performs base-10 to base-16 conversion using successive division by 16:
1. **Input**: Prompts the user to enter a decimal integer `dec`.
2. **Remainder Evaluation**:
   A `while(dec > 0)` loop processes the number:
   - Evaluates the remainder `dec % 16` (yielding values between `0` and `15`).
   - Stores the remainders in the `hex` array.
   - Divides the decimal number by 16 (`dec = dec / 16`) to advance.
3. **Character Translation & Reversal**:
   Iterates through the `hex` array in reverse order to build the hexadecimal string. Since hex values `10` through `15` map to non-numeric letters, the code uses conditional branches (`if-else if`) to map:
   - `10` $\rightarrow$ `A`
   - `11` $\rightarrow$ `B`
   - `12` $\rightarrow$ `C`
   - `13` $\rightarrow$ `D`
   - `14` $\rightarrow$ `E`
   - `15` $\rightarrow$ `F`
   - Values `0` to `9` are printed directly as digits.


