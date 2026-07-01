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

