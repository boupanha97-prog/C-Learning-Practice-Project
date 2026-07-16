# 🖨️ Print Right Aligned

This program uses standard format specifiers to alignment-shift text fields.

## 📄 Source File
- [`right_aligned.c`](right_aligned.c)

## 🚀 Compilation & Execution
```powershell
gcc right_aligned.c -o right_aligned
.\right_aligned
```

## 📊 Expected Output Results
```text
Full Name      :                 Bou Panha
Date of Birth  :                15-09-1995
Mobile Number  :                 123456789
```

## 🔍 Code Explanation
- `%-15s` defines a left-aligned string field with a fixed padding width of 15 characters (the negative sign forces left-alignment).
- `%25s` defines a right-aligned string field with a fixed padding width of 25 characters.
