# 💵 Banknote Type Counting System

A C program that calculates the minimum number of USD banknotes ($100, $50, $20, $10, and $1) required to make up any given integer amount.

## 📄 Source File
- [`counting_system.c`](counting_system.c)

## 🚀 Compilation & Execution
```powershell
gcc counting_system.c -o counting_system
.\counting_system
```

## 📊 Expected Output Results
```text
N : 283
100$ =2 សន្លឹក
50$ =1 សន្លឹក
20$ =1 សន្លឹក
10$ =1 សន្លឹក
 1$ =3 សន្លឹក
```

## 🔍 Source Code Explanation

The program [`counting_system.c`](counting_system.c) implements a simple **greedy algorithm** to determine the minimum number of bills needed to represent a given amount:
1. **Input**: Prompts the user to enter an integer amount `N` via standard input (`scanf`).
2. **Greedy Breakdown**: For each banknote denomination (starting from the largest: $100, $50, $20, $10, down to $1):
   - Computes the number of banknotes required using integer division (`n / denomination`).
   - Displays the count of banknotes.
   - Subtracts the total value of those printed banknotes from `n` using the expression `n -= (n / denomination) * denomination` to update the remaining amount for subsequent smaller denominations.


