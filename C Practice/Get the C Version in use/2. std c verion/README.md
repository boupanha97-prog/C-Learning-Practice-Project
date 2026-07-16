# 🔍 Standard C Version

This program prints the defined macros for the standard library version.

## 📄 Source File
- [`std_version.c`](std_version.c)

## 🚀 Compilation & Execution
```powershell
gcc std_version.c -o std_version
.\std_version
```

## 📊 Expected Output Results
```text
__STDC_VERSION__is defined: 201112L
__STDC__ is defined: 1
```

## 🔍 Code Explanation
Prints whether `__STDC_VERSION__` and `__STDC__` (indicating compliance with ANSI C) are defined, displaying their exact values.
