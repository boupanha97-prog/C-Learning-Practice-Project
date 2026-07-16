# 🖨️ Uppercase Masked

This program demonstrates custom text filters for case conversion and character masking.

## 📄 Source File
- [`uppercase_masked.c`](uppercase_masked.c)

## 🚀 Compilation & Execution
```powershell
gcc uppercase_masked.c -o uppercase_masked
.\uppercase_masked
```

## 📊 Expected Output Results
```text
Full Name      : BOU PANHA
Date of Birth  : 15-07-1996
Mobile Number  : 123*****789
```

## 🔍 Code Explanation
- **`printUppercase`**: Iterates through each character, converts it to uppercase using `toupper()` (from `<ctype.h>`), and writes it using `putchar()`.
- **`printMaskedMobile`**: Loops through the mobile phone digits. If the loop index `i` is between `3` and `len - 4` inclusive, it prints `*` instead of the number, masking the sensitive middle digits.
