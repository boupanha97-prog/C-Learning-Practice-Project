# 🔍 Version C in Use

This program detects the active C standard version used during compilation.

## 📄 Source File
- [`version_c_in_use.c`](version_c_in_use.c)

## 🚀 Compilation & Execution
```powershell
gcc version_c_in_use.c -o version_c_in_use
.\version_c_in_use
```

## 🔍 Code Explanation
Evaluates the preprocessor macro `__STDC_VERSION__` to identify the C Standard active during compilation:
- `__STDC_VERSION__ >= 201710L` -> C18 standard.
- `__STDC_VERSION__ >= 201112L` -> C11 standard.
- `__STDC_VERSION__ >= 199901L` -> C99 standard.
- Otherwise, defaults to older C89/C90 standard.
