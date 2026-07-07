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
