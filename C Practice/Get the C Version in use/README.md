# 🔍 C Compiler & Standard Version Detector

A set of utility scripts to query compiler metadata, preprocessor macros, and verify the active C Standard library/compiler environment in use.

## 📄 Source Files
- [1. Version C in Use - `version_c_in_use.c`](<1. Version C in Use/version_c_in_use.c>)
- [2. std c verion - `std_version.c`](<2. std c verion/std_version.c>)
- [3. Complier info - `compiler_info.c`](<3. Complier info/compiler_info.c>)
- [4. Check standard - `check_standard.c`](<4. Check standard/check_standard.c>)
- [5. date time verion - `date_time_version.c`](<5. date time verion/date_time_version.c>)

## 🚀 Compilation & Execution
To compile and run any of these modules, navigate into their respective directories:

### 1. Version C in Use
```powershell
cd "1. Version C in Use"
gcc version_c_in_use.c -o version_c_in_use
.\version_c_in_use
```

### 2. Standard C Version
```powershell
cd "2. std c verion"
gcc std_version.c -o std_version
.\std_version
```

### 3. Compiler Info
```powershell
cd "3. Complier info"
gcc compiler_info.c -o compiler_info
.\compiler_info
```

### 4. Check Standard
```powershell
cd "4. Check standard"
gcc check_standard.c -o check_standard
.\check_standard
```

### 5. Date Time Version
```powershell
cd "5. date time verion"
gcc date_time_version.c -o date_time_version
.\date_time_version
```

## 📊 Expected Output Results
Depending on the tool executed, you will get output like:

```text
Compiler : GCC
Version : 6.3.0
```

```text
Compiled under C11.
```

```text
Compilation Date : Jul  7 2026
Compilation Time : 20:13:57
C Standard       : 201112L
```

## 🔍 Source Code Explanation

Each of these utility scripts queries compiler environment metadata at compile time or run time:

### 1. Version C in Use (`version_c_in_use.c`)
- Evaluates the preprocessor macro `__STDC_VERSION__` to identify the C Standard active during compilation:
  - `__STDC_VERSION__ >= 201710L` $\rightarrow$ C18 standard.
  - `__STDC_VERSION__ >= 201112L` $\rightarrow$ C11 standard.
  - `__STDC_VERSION__ >= 199901L` $\rightarrow$ C99 standard.
  - Otherwise, defaults to older C89/C90 standard.

### 2. Standard C Version (`std_version.c`)
- Prints whether `__STDC_VERSION__` and `__STDC__` (indicating compliance with ANSI C) are defined, displaying their exact long/integer values.

### 3. Compiler Info (`compiler_info.c`)
- Uses pre-defined preprocessor symbols to detect the active compiler suite:
  - `__clang__` $\rightarrow$ Clang (prints `__clang_major__`, `__clang_patchlevel__`).
  - `__GNUC__` $\rightarrow$ GCC (prints `__GNUC__`, `__GNUC_MINOR__`, `__GNUC_PATCHLEVEL__`).
  - `_MSC_VER` $\rightarrow$ Microsoft Visual C++ compiler (prints compiler version code).

### 4. Check Standard (`check_standard.c`)
- Inspects compiler conformance similar to `version_c_in_use.c` and outputs a descriptive string explaining compliance with C17/C18, C11, C99, or pre-C99 standards.

### 5. Date Time Version (`date_time_version.c`)
- Uses the standard ANSI C preprocessor macros `__DATE__` and `__TIME__` to print the exact date and time the binary was compiled by the toolchain, along with `__STDC_VERSION__`.

