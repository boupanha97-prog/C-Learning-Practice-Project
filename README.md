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

Welcome to the **C Learning Practice Project** repository. This workspace contains structured programming exercises ranging from foundational input/output algorithms to interactive games, vector mathematics, number base converters, and local financial calculation systems written in pure C.

---

## 📂 Featured Projects & Modules

| Icon | Project Module | Description | Key Topics |
| :---: | :--- | :--- | :--- |
| 🔢 | **[Decimal to Binary](<C Practice/Convert Decimal to Binary/dec_to_bin.c>)** | Converts positive decimal integers into binary representation. | Binary division, array manipulation |
| 🔢 | **[Binary to Decimal](<C Practice/Convert Binary to Decimal/bin_to_dec.c>)** | Converts binary numbers into decimal integers. | Bitwise logic, positional notation |
| 🔢 | **[Binary to Octal](<C Practice/Convert Binary to Octal/bin_to_octal.c>)** | Converts binary input to base-8 octal representation. | Multi-base conversion |
| 🔢 | **[Decimal to Hexadecimal](<C Practice/Convert Decimal to Hexadecimal/dec_to_hex.c>)** | Converts decimal numbers to hex format (0-9, A-F). | Character mapping, base-16 arithmetic |
| 🔢 | **[Decimal to Octal](<C Practice/Convert Decimal to Octal/dec_to_octal.c>)** | Converts decimal numbers to octal system. | Base-8 modulo division |
| 🔢 | **[Octal to Decimal](<C Practice/Convert Octal to Decimal/octal_to_dec.c>)** | Converts base-8 octal values to decimal. | Polynomial expansion |
| 🔢 | **[Octal to Binary](<C Practice/Covert Octal to Binary/octal_to_bin.c>)** | Converts base-8 octal values into binary representation. | Intermediate base conversion |
| 📐 | **[Vector Calculator (Product & Norm)](<C Practice/Calculator Vector System (Multiple, Norm Vector)/cal_one_loop.c>)** | Calculates vector dot product and Euclidean norm (||V||). | Linear algebra, `math.h`, `sqrt` |
| 📐 | **[Vector Calculator (Sum, Diff, Scalar)](<C Practice/Calculator Vector System (Sum, Subtraction, scaler)/cal_one_loop.c>)** | Computes vector addition, subtraction, and scalar multiplication. | Vector operations, array traversal |
| 🎲 | **[Kla Klok](<C Practice/Kla Klok/kla_klok.c>)** | Console game simulating the traditional Khmer dice game (Bau Cua / Fish-Prawn-Crab). | Randomization (`rand`), switch-case |
| 🇰🇭 | **[Khmer Numeral Calling Money](<C Practice/Khmer numeral system for calling money/khmer_calling_money.c>)** | Converts numerical currency amounts into spoken Khmer number terminology. | Digit extraction, modulo arithmetic |
| 💵 | **[Banknote Counting System](<C Practice/Banknote type counting system/counting_system.c>)** | Calculates the minimum breakdown of $100, $50, $20, $10, and $1 banknotes. | Greedy algorithm, integer division |
| 🇰🇭 | **[Cambodia Payroll Tax System](<C Practice/Cambodia payroll tax system/tax_system.c>)** | Calculates Cambodian salary tax base and progressive tax brackets. | Conditional branching, tax slabs |
| 🔄 | **[Reverse The Number](<C Practice/Reverse the number/Reverse_number.c>)** | Reverses digits of an integer input. | While loops, modulo operator (`%`) |

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
# Example: Running Decimal to Binary Converter
cd "C Practice\Convert Decimal to Binary"
gcc dec_to_bin.c -o dec_to_bin
.\dec_to_bin
```

> 💡 **Tip for Windows PowerShell Users:** 
> When running `cd` commands, avoid putting a trailing backslash inside double quotes (e.g., use `"folder"` instead of `"folder"`), as PowerShell treats `"` as an escaped quote character.

---

## 🛠️ Repository Guidelines

- ⚙️ **Clean Builds**: `.gitignore` is pre-configured to ignore compiled binaries (`.exe`, `.o`, `.obj`) so only source code is tracked.
- 💾 **File Saving**: Remember to save files (`Ctrl + S`) before executing GCC compilation in terminal to avoid `WinMain@16` missing entry-point errors.

---

<div align="center">

Developed with ❤️ by **[boupanha97-prog](https://github.com/boupanha97-prog)**

</div>
