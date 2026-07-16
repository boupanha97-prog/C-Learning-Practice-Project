# 🔍 Compiler Info

This program detects the compiler suite (GCC, Clang, or MSVC) and its version.

## 📄 Source File
- [`compiler_info.c`](compiler_info.c)

## 🚀 Compilation & Execution
```powershell
gcc compiler_info.c -o compiler_info
.\compiler_info
```

## 🔍 Code Explanation
Uses pre-defined preprocessor symbols to detect the active compiler suite:
- `__clang__` -> Clang (prints `__clang_major__`, `__clang_patchlevel__`).
- `__GNUC__` -> GCC (prints `__GNUC__`, `__GNUC_MINOR__`, `__GNUC_PATCHLEVEL__`).
- `_MSC_VER` -> Microsoft Visual C++ compiler (prints compiler version code).
