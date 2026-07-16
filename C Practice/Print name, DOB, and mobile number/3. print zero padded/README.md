# 🖨️ Print Zero Padded

This program prints padded text fields using zeros instead of standard spaces.

## 📄 Source File
- [`zero_padded.c`](zero_padded.c)

## 🚀 Compilation & Execution
```powershell
gcc zero_padded.c -o zero_padded
.\zero_padded
```

## 🔍 Code Explanation
- Implements a custom function `printZeroPadded(label, value, width)`.
- It dynamically calculates `padding = width - strlen(value)`.
- Outputs the left-aligned label first, loops to print the required amount of `'0'` characters, and then prints the string value.
