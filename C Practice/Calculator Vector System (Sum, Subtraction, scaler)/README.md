# 📐 Vector Arithmetic System

A C program computing 3D vector additions, subtractions, and complex linear combinations ($2V-3U, 2U+3V-4W$).

## 📄 Source Files
- [`cal_one_loop.c`](cal_one_loop.c): Array-based calculation of vector operations.
- [`cal_more_loop.c`](cal_more_loop.c): Direct loop printing of vector sum, difference, and combinations.

## 🚀 Compilation & Execution
```powershell
gcc cal_more_loop.c -o cal_more_loop
.\cal_more_loop
```

## 📊 Expected Output Results

### 1. cal_one_loop.c Output
```text
Vector U+V = (-1, 5, -4)
Vector U+W = (5, 4, -8)
Vector V+W = (2, 5, -6)
Vector U-V = (3, -1, -2)
Vector U-W = (-3, 0, 2)
Vector 2V-3U = (-7, 0, 7)
Vector 2U+3V-4W = (-20, 5, 11)
```

### 2. cal_more_loop.c Output
```text
Vector U+V = -1 5 -4 
Vector U+W = 5 4 -8 
Vector V+W = 2 5 -6 
Vector U-V = 3 -1 -2 
Vector U-W = -3 0 2 
Vector 2V-3U = -7 0 7 
Vector 2U+3V-4W = -20 5 11 
```

## 🔍 Source Code Explanation

This module performs basic vector linear combinations on three pre-defined 3-dimensional vectors ($U = \{1, 2, -3\}$, $V = \{-2, 3, -1\}$, and $W = \{4, 2, -5\}$) under two different control structures:

1. **Vector Operations**:
   - **Addition ($U + V$)**: Adds corresponding indices: $U_i + V_i$.
   - **Subtraction ($U - V$)**: Subtracts corresponding indices: $U_i - V_i$.
   - **Linear Combinations ($2V - 3U$ and $2U + 3V - 4W$)**: Computes scaled element combinations at each index (e.g. $2V_i - 3U_i$).

### Implementations:
- **[`cal_more_loop.c`](cal_more_loop.c)**: Runs seven independent `for` loops sequentially. Inside each loop, it prints the result inline, index-by-index, resulting in a space-separated sequence (e.g., `-1 5 -4`).
- **[`cal_one_loop.c`](cal_one_loop.c)**: Optimizes execution cycles by performing all seven linear combinations inside a **single loop iteration**, storing the results into separate temporary arrays (`a`, `b`, `c`, `d`, `e`, `f`, `g`). It then prints the complete vectors formatted as coordinates (e.g., `(-1, 5, -4)`).


