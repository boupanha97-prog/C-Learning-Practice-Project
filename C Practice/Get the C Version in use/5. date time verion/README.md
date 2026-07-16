# 🔍 Date Time Version

This program prints the date and time of compilation along with the C standard.

## 📄 Source File
- [`date_time_version.c`](date_time_version.c)

## 🚀 Compilation & Execution
```powershell
gcc date_time_version.c -o date_time_version
.\date_time_version
```

## 🔍 Code Explanation
Uses the standard ANSI C preprocessor macros `__DATE__` and `__TIME__` to print the exact date and time the binary was compiled by the toolchain, along with `__STDC_VERSION__`.
