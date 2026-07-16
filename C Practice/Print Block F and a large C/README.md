# 🖨️ Print Block F and a large C

Simple console printing programs that display graphical character representations in a block layout using pure C.

## 📄 Source Files
- [1. Block of F and big C - `simple_printf.c`](<1. Block of F and big C/simple_printf.c>)
- [2. Mirrored f - `mirrored f.c`](<2. Mirrored f/mirrored f.c>)
- [3. Hollow C - `hollow c.c`](<3. Hollow C/hollow c.c>)
- [4. Rotated f - `rotated f.c`](<4. Rotated f/rotated f.c>)

## 🚀 Compilation & Execution
To compile and execute these files:

### 1. Block of F and big C
```powershell
cd "1. Block of F and big C"
gcc simple_printf.c -o simple_printf
.\simple_printf
```

### 2. Mirrored f
```powershell
cd "2. Mirrored f"
gcc "mirrored f.c" -o mirrored_f
.\mirrored_f
```

### 3. Hollow C
```powershell
cd "3. Hollow C"
gcc "hollow c.c" -o hollow_c
.\hollow_c
```

### 4. Rotated f
```powershell
cd "4. Rotated f"
gcc "rotated f.c" -o rotated_f
.\rotated_f
```

## 🔍 Source Code Explanation

### 1. Block of F and big C (`simple_printf.c`)
This program uses raw standard output (`printf`) statements to draw standard pixel-style letter shapes in the console:
- **Block F**: Formed by printing a top horizontal bar (`######`), left vertical side rails (`#`), a middle horizontal bar (`#####`), and remaining bottom rails.
- **Big C**: Formed using carefully spaced spaces and `#` boundaries to shape a curved look:
  - Curved top (`   ######` and ` ##      ##`)
  - Middle body columns (` #`)
  - Curved bottom (` ##      ##` and `   ######`)

### 2. Mirrored f (`mirrored f.c`)
This program dynamically generates a block letter `F` on a grid, applies a custom hollow outline rule to its middle arm, and mirrors it to display both side-by-side:
- **Dynamic Grid Setup**: Uses standard 2D arrays to map out the block letter's stem (solid), top bar (solid), and middle arm.
- **Hollow Arm Section**: Implements boundary-checking rules to draw only the outer outline of the middle arm, leaving the interior cells hollow.
- **Side-by-Side Mirrored Display**: For each row, it constructs the original layout and then mirrors it by reversing the string character-by-character from left to right. It outputs both side-by-side in the console.

### 3. Hollow C (`hollow c.c`)
This program dynamically constructs a block letter `C` and renders it with three layers of detail:
- **Pass 1 (Border Highlighting)**: Uses standard 2D arrays to set the letter boundaries. Any filled cell that touches empty space or the grid edge is flagged as part of the outer border.
- **Pass 2 (Layer Rendering)**: 
  - Prints `#` for the outer border highlight.
  - Prints `*` for the inner ring directly adjacent to the border.
  - Leaves the deep hollow interior blank.

### 4. Rotated f (`rotated f.c`)
This program creates a block letter `F` (with a hollow arm section) and rotates the entire grid 90 degrees clockwise before printing:
- **Grid Mapping**: Dynamically calculates standard stem, top bar, and hollow-arm sections.
- **Clockwise Rotation**: Transforms the `ROWS` x `COLS` character array into a `COLS` x `ROWS` array by mapping `rotated[i][j] = shape[ROWS - 1 - j][i]`.
