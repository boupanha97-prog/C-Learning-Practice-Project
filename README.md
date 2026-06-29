<div align="center">

# 🚀 C Learning & Practice Projects

**A curated collection of practical C programming projects, algorithmic implementations, and real-world utility systems.**

[![Language](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Compiler](https://img.shields.io/badge/Compiler-GCC%20%2F%20MinGW-007ACC?style=for-the-badge&logo=windows&logoColor=white)](https://gcc.gnu.org/)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-222222?style=for-the-badge)](https://github.com/boupanha97-prog/C-Learning-Practice-Project)
[![Repo Size](https://img.shields.io/github/repo-size/boupanha97-prog/C-Learning-Practice-Project?style=for-the-badge&color=brightgreen)](https://github.com/boupanha97-prog/C-Learning-Practice-Project)

---

</div>

## 📌 Overview

Welcome to the **C Learning Practice Project** repository. This workspace contains structured programming exercises ranging from foundational input/output algorithms to interactive games and local financial calculation systems written in pure C.

---

## 📂 Featured Projects & Modules

| Icon | Project Module | Description | Key Topics |
| :---: | :--- | :--- | :--- |
| 🎲 | **[Kla Klok](<C Practice/Kla Klok/kla_klok.c>)** | Console game simulating the traditional Khmer dice game (Bau Cua / Fish-Prawn-Crab). | Randomization (`rand`), switch-case, state logic |
| 🇰🇭 | **[Khmer Numeral Calling Money](<C Practice/Khmer numeral system for calling money/khmer_calling_money.c>)** | Converts numerical currency amounts into spoken Khmer number terminology. | Digit extraction, modulo arithmetic, recursive/iterative output |
| 💵 | **[Banknote Counting System](<C Practice/Banknote type counting system/counting_system.c>)** | Calculates the minimum breakdown of $100, $50, $20, $10, and $1 banknotes for any input amount. | Greedy algorithm, integer division, remainder tracking |
| 🇰🇭 | **[Cambodia Payroll Tax System](<C Practice/Cambodia payroll tax system/tax_system.c>)** | Calculates Cambodian salary tax base, dependent child allowances, and progressive tax brackets. | Conditional branching, tax slab calculations |
| 🔄 | **[Reverse The Number](<C Practice/Reverse the number/Reverse_number.c>)** | Reverses the digits of an integer using iterative arithmetic. | While loops, modulo operator (`%`) |
| 📋 | **[Print Profile Info](<C Practice/Print name DOB and mobile number/>)** | Basic exercise demonstrating formatted console input and output. | Standard I/O (`printf`, `scanf`) |

---

## ⚡ Quick Start & Execution Guide

### Prerequisites
Make sure you have the GCC compiler installed (e.g., MinGW on Windows or GCC on Linux/macOS).

```bash
gcc --version
```

### Compiling & Running a Module

Navigate to the project folder of your choice and compile using GCC:

```powershell
# 1. Navigate to the desired project directory
cd "C Practice\Banknote type counting system"

# 2. Compile the C source file
gcc counting_system.c -o counting_system

# 3. Execute the binary
.\counting_system
```

> 💡 **Tip for Windows PowerShell Users:** 
> When running `cd` commands, avoid putting a trailing backslash inside double quotes (e.g., use `"folder"` instead of `"folder\"`), as PowerShell treats `\"` as an escaped quote character.

---

## 🛠️ Repository Guidelines

- ⚙️ **Clean Builds**: `.gitignore` is pre-configured to ignore compiled binaries (`.exe`, `.o`, `.obj`) so only source code is tracked.
- 💾 **File Saving**: Remember to save files (`Ctrl + S`) before executing GCC compilation in terminal to avoid `WinMain@16` missing entry-point errors.

---

<div align="center">

Developed with ❤️ by **[boupanha97-prog](https://github.com/boupanha97-prog)**

</div>
