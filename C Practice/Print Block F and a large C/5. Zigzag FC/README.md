# 🖨️ Zigzag FC

This program prints alternating block letters `F` and `C` in an offset zigzag pattern on a single standard output canvas.

## 📄 Source File
- [`zigzag fc.c`](zigzag%20fc.c)

## 🚀 Compilation & Execution
```powershell
gcc "zigzag fc.c" -o zigzag_fc
.\zigzag_fc
```

## 📊 Expected Output Results
```text
*****         *****         *****         
*             *             *             
***           ***           ***           
*       ****  *       ****  *       ****  
*      *      *      *      *      *      
       *             *             *      
       *             *             *      
        ****          ****          ****  
```

## 🔍 Code Explanation
- **Matrix Representation**: Defines letters `F` and `C` as 5x5 binary grids (arrays of arrays) where `1` indicates a character pixel and `0` indicates blank space.
- **Zigzag Canvas**: Prepares a 2D canvas of size 8 rows by 42 columns (calculated dynamically using the letter count, dimensions, gaps, and steps).
- **Zigzag Logic**:
  - Sets standard gaps (`GAP = 2`) and row offsets (`ROW_STEP = 3`).
  - Iterates through the letter indices (6 letters total).
  - Alternate letters: even indices use the `F` template with `rowOffset = 0` (top); odd indices use the `C` template with `rowOffset = 3` (bottom).
  - Copies the active letter template onto the offset canvas position.
- **Rendering**: Outputs the entire canvas line-by-line.
