# 🔢 Binary to Decimal Converter

Converts binary integer inputs (e.g., `1101`) into their base-10 decimal equivalent.

## 📄 Source File
- [`bin_to_dec.c`](bin_to_dec.c)

## 🚀 Compilation & Execution
```powershell
gcc bin_to_dec.c -o bin_to_dec
.\bin_to_dec
```

## 📊 Expected Output Results
```text
Input Binary: 11011
---------------
Output Dec: 27
```

## 🔍 Source Code Explanation

The program [`bin_to_dec.c`](bin_to_dec.c) performs positional base conversion from binary (base-2) to decimal (base-10):
1. **Input**: Prompts for a binary sequence, read as a long integer (`binary`).
2. **Decomposition & Reconstruction**:
   A `while(binary > 0)` loop processes the binary number digit-by-digit from right to left:
   - **Extract Digit**: Computes `remain = binary % 10` to isolate the rightmost binary digit (either `0` or `1`).
   - **Accumulate**: Multiplies `remain` by the corresponding power of 2 (`pow(2, i)`) and adds it to the accumulator `dec`.
   - **Shift Left**: Divides the `binary` value by 10 (`binary = binary / 10`) to discard the processed rightmost digit.
   - **Increment**: Increments the power index `i++` for the next position.
3. **Output**: Prints the final accumulated decimal sum `dec`.


