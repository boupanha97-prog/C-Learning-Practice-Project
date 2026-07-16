# 🖨️ Rotated F

This program dynamically generates a block letter `F` (with a hollow middle arm) and rotates the shape 90 degrees clockwise before printing.

## 📄 Source File
- [`rotated f.c`](rotated%20f.c)

## 🚀 Compilation & Execution
```powershell
gcc "rotated f.c" -o rotated_f
.\rotated_f
```

## 📊 Expected Output Results
```text
*************
*************
*************
     * *  ***
     * *  ***
     * *  ***
     ***  ***
          ***
          ***
```

## 🔍 Code Explanation
- **Grid Mapping**: First maps out the block letter `F` (rows x columns) in a standard 2D character buffer, keeping the stem and top bar solid and the middle arm hollow.
- **Clockwise Rotation**: Creates a new 2D buffer with swapped dimensions (`COLS` x `ROWS`) and shifts indices according to 90 degrees clockwise rotation:
  $$\text{rotated}[i][j] = \text{shape}[\text{ROWS} - 1 - j][i]$$
- **Render Output**: Iterates and prints the rotated grid row-by-row.
