# 📐 Vector Multiplication & Norm Calculator

A C program designed for 3D vector arithmetic, calculating vector dot products ($U \cdot V, V \cdot W, U \cdot W$) and Euclidean vector norms ($||U||, ||V||, ||W||$).

## 📄 Source Files
- [`cal_one_loop.c`](cal_one_loop.c): Single-loop implementation for parallel dot products and norm calculations.
- [`cal_more_loop.c`](cal_more_loop.c): Multi-loop breakdown of vector operations.

## 🚀 Compilation & Execution
```powershell
gcc cal_one_loop.c -o cal_one_loop
.\cal_one_loop
```

## 📊 Expected Output Results
```text
Vector UxV = 7
Vector VxW = 3
Vector UxW = 23
Vector ||U||= sqrt(14) = 3.74
Vector ||V||= sqrt(14) = 3.74
Vector ||W||= sqrt(45) = 6.71
```

## 🔍 Source Code Explanation

This module calculates the dot product and Euclidean norm for three-dimensional vectors ($U, V, W$) in two ways:

1. **Dot Product ($U \cdot V$)**: Sum of the products of corresponding elements:
   $$U \cdot V = \sum_{i=0}^{2} U_i \cdot V_i = U_0 V_0 + U_1 V_1 + U_2 V_2$$
2. **Euclidean Norm ($||U||$)**: Square root of the sum of squared elements:
   $$||U|| = \sqrt{U_0^2 + U_1^2 + U_2^2}$$

### Implementations:
- **[`cal_more_loop.c`](cal_more_loop.c)**: Implements separate sequential loops to compute each calculation individually. This separates concerns but performs six distinct iterations over the array indexes.
- **[`cal_one_loop.c`](cal_one_loop.c)**: Optimizes calculation by computing all three dot products (`UxV`, `VxW`, `UxW`) and all three sum of squares (`U^2`, `V^2`, `W^2`) within a **single loop iteration**. It then uses `sqrt()` from `<math.h>` to calculate the final decimal norms.


