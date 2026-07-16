# 🖨️ Print Zero Padded

This program prints padded text fields using zeros instead of standard spaces.

## 📄 Source File
- [`zero_padded.c`](zero_padded.c)

## 🚀 Compilation & Execution
```powershell
gcc zero_padded.c -o zero_padded
.\zero_padded
```

## 📊 Expected Output Results
```text
Full Name      : 00000000000Bou Panha
Date of Birth  : 000000012-March-2006
Mobile Number  : 00000000000123456789
```

## 🔍 Code Explanation
- Implements a custom function `printZeroPadded(label, value, width)`.
- It dynamically calculates `padding = width - strlen(value)`.
- Outputs the left-aligned label first, loops to print the required amount of `'0'` characters, and then prints the string value.
