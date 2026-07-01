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

