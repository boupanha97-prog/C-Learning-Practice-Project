# C-Learning-Practice-Project

This repository contains C programming practice exercises and projects.

## 📁 Project Structure

- **`C Practice/Kla Klok/`**
  - `kla_klok.c`: A console-based game simulating the traditional Kla Klok (Bau Cua Fish-Prawn-Crab) game in Khmer.
- **`C Practice/Cambodia payroll tax system/`**
  - `tax_system.c`: Cambodian payroll tax calculation system based on salary brackets and dependent allowances.
- **`C Practice/Banknote type counting system/`**
  - `counting_system.c`: Calculates banknote denomination breakdown ($100, $50, $20, $10, $1) for a given amount.
- **`C Practice/Print name DOB and mobile number/`**
  - Basic input/output formatting exercises.

## 🚀 How to Run

To compile and run any C program in this repository using GCC in PowerShell:

```powershell
# Example: Running Banknote Counting System
cd "C Practice/Banknote type counting system"
gcc counting_system.c -o counting_system
.\counting_system
```

> ⚠️ **Note for PowerShell Users**: Avoid ending quoted folder paths with `\"` (e.g. `cd "path\"`) because `\"` escapes the quote in PowerShell. Use `cd "path"` without the trailing backslash.
