# 🔍 Check Standard

This program inspects compiler conformance and standard versions.

## 📄 Source File
- [`check_standard.c`](check_standard.c)

## 🚀 Compilation & Execution
```powershell
gcc check_standard.c -o check_standard
.\check_standard
```

## 📊 Expected Output Results
```text
Compiled under C11.
```

## 🔍 Code Explanation
Inspects compiler conformance similar to `version_c_in_use.c` and outputs a descriptive string explaining compliance with C17/C18, C11, C99, or pre-C99 standards.
