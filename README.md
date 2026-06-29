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

Welcome to the **C Learning Practice Project** repository. This workspace contains structured programming exercises ranging from foundational input/output algorithms to interactive games, vector linear algebra systems, number base converters, and local financial calculation systems written in pure C.

---

## 📂 Featured Projects & Modules

| Icon | Project Module | Description | Key Topics |
| :---: | :--- | :--- | :--- |
| 📐 | **[Vector Arithmetic System](<C Practice/Calculator Vector System (Sum, Subtraction, scaler)/cal_one_loop.c>)** | Calculates 3D vector addition, subtraction, and linear combinations ($2V-3U, 2U+3V-4W$). | Vector algebra, array loops |
| 📐 | **[Vector Product & Norm System](<C Practice/Calculator Vector System (Multiple, Norm Vector)/cal_one_loop.c>)** | Computes dot products ($U \cdot V, V \cdot W$) and Euclidean norms ($||U||, ||V||, ||W||$). | Linear algebra, `math.h`, `sqrt` |
| 🔢 | **[Decimal to Binary](<C Practice/Convert Decimal to Binary/dec_to_bin.c>)** | Converts positive decimal integers into binary representation. | Binary division, array manipulation |
| 🔢 | **[Binary to Decimal](<C Practice/Convert Binary to Decimal/bin_to_dec.c>)** | Converts binary numbers into decimal integers. | Bitwise logic, positional notation |
| 🔢 | **[Binary to Octal](<C Practice/Convert Binary to Octal/bin_to_octal.c>)** | Converts binary input to base-8 octal representation. | Multi-base conversion |
| 🔢 | **[Decimal to Hexadecimal](<C Practice/Convert Decimal to Hexadecimal/dec_to_hex.c>)** | Converts decimal numbers to hex format (0-9, A-F). | Character mapping, base-16 arithmetic |
| 🔢 | **[Decimal to Octal](<C Practice/Convert Decimal to Octal/dec_to_octal.c>)** | Converts decimal numbers to octal system. | Base-8 modulo division |
| 🔢 | **[Octal to Decimal](<C Practice/Convert Octal to Decimal/octal_to_dec.c>)** | Converts base-8 octal values to decimal. | Polynomial expansion |
| 🔢 | **[Octal to Binary](<C Practice/Covert Octal to Binary/octal_to_bin.c>)** | Converts base-8 octal values into binary representation. | Intermediate base conversion |
| 🎲 | **[Kla Klok](<C Practice/Kla Klok/kla_klok.c>)** | Console game simulating the traditional Khmer dice game (Bau Cua / Fish-Prawn-Crab). | Randomization (`rand`), switch-case |
| 🇰🇭 | **[Khmer Numeral Calling Money](<C Practice/Khmer numeral system for calling money/khmer_calling_money.c>)** | Converts numerical currency amounts into spoken Khmer number terminology. | Digit extraction, modulo arithmetic |
| 💵 | **[Banknote Counting System](<C Practice/Banknote type counting system/counting_system.c>)** | Calculates the minimum breakdown of $100, $50, $20, $10, and $1 banknotes. | Greedy algorithm, integer division |
| 🇰🇭 | **[Cambodia Payroll Tax System](<C Practice/Cambodia payroll tax system/tax_system.c>)** | Calculates Cambodian salary tax base and progressive tax brackets. | Conditional branching, tax slabs |
| 🔄 | **[Reverse The Number](<C Practice/Reverse the number/Reverse_number.c>)** | Reverses digits of an integer input. | While loops, modulo operator (`%`) |

---

## 🔍 Code Snippets & Previews

<details>
<summary><b>▶ Vector Arithmetic System (cal_more_loop.c)</b></summary>

```c
#include <stdio.h>

int main() {
    int U[3] = {1,2,-3};
    int V[3] = {-2,3,-1};
    int W[3] = {4,2,-5};
    
    printf("Vector U+V = ");
    for(int i=0; i<3; i++) printf("%d ", U[i]+V[i]);
    
    printf("
Vector 2V-3U = ");
    for(int i=0; i<3; i++) printf("%d ", (2*V[i])-(3*U[i]));

    printf("
Vector 2U+3V-4W = ");
    for(int i=0; i<3; i++) printf("%d ", (2*U[i])+(3*V[i])-(4*W[i]));

    return 0;
}
```
</details>

<details>
<summary><b>▶ Vector Product & Norm System (cal_one_loop.c)</b></summary>

```c
#include <stdio.h>
#include <math.h>

int main() {
    int U[3] = {1,2,-3}, V[3] = {-2,3,-1}, W[3] = {4,2,-5};
    int s=0, s3=0;

    for(int i=0; i<3; i++){
        s += U[i]*V[i];
        s3 += U[i]*U[i];
    }
    printf("
Vector UxV = %d", s);
    printf("
Vector ||U|| = sqrt(%d) = %.2f
", s3, sqrt(s3));

    return 0;
}
```
</details>

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
# Example: Running Vector Arithmetic Module
cd "C Practice\Calculator Vector System (Sum, Subtraction, scaler)"
gcc cal_more_loop.c -o cal_more_loop
.\cal_more_loop
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
