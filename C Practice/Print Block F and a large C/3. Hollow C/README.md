# 🖨️ Hollow C

This program dynamically constructs a block letter `C` and renders it using a multi-layered boundary detection algorithm.

## 📄 Source File
- [`hollow c.c`](hollow%20c.c)

## 🚀 Compilation & Execution
```powershell
gcc "hollow c.c" -o hollow_c
.\hollow_c
```

## 📊 Expected Output Results
```text
###########
#*********#
#**########
#*#        
#*#        
#*#        
#*#        
#*#        
#*#        
#*#        
#**########
#*********#
###########
```

## 🔍 Code Explanation
- **Block Layout**: Uses a 13x11 grid representing a block letter `C` (solid top bar, solid bottom bar, and solid left bar).
- **Pass 1 (Border Detection)**: Identifies which grid cells belong to the outer boundary. A cell is marked as border if it is filled and touches an empty cell or the edge of the grid.
- **Pass 2 (Multi-Layer Rendering)**: Renders the shape with three levels of depth:
  - `#` characters represent the outer highlight boundary.
  - `*` characters represent the immediate inner layer adjacent to the boundary.
  - Spaces fill the interior "hollow" center of the shape.
