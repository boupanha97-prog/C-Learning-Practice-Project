# 🖨️ Print Block F and a large C

Simple console printing programs that display graphical character representations in a block layout using pure C.

## 📄 Source Files
- [1. Block of F and big C - `simple_printf.c`](<1. Block of F and big C/simple_printf.c>)
- [2. Mirrored f - `mirrored f.c`](<2. Mirrored f/mirrored f.c>)

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

## 🔍 Source Code Explanation

### 1. Block of F and big C (`simple_printf.c`)
This program uses raw standard output (`printf`) statements to draw standard pixel-style letter shapes in the console:
- **Block F**: Formed by printing a top horizontal bar (`######`), left vertical side rails (`#`), a middle horizontal bar (`#####`), and remaining bottom rails.
- **Big C**: Formed using carefully spaced spaces and `#` boundaries to shape a curved look:
  - Curved top (`   ######` and ` ##      ##`)
  - Middle body columns (` #`)
  - Curved bottom (` ##      ##` and `   ######`)

### 2. Mirrored f (`mirrored f.c`)
This program mirrors the horizontal segments of the block letter `F` so that the vertical backbone sits on the right-hand side rather than the left:
- Displays a top bar (`######`)
- Uses leading spaces to shift the vertical backbone characters to the right side (`     #`)
- Centers the middle bar (` #####`)
- Ends with right-aligned vertical bars.
