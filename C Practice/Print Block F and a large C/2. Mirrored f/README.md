# 🖨️ Mirrored F

This program dynamically generates a block letter F on a grid, applies a custom hollow outline rule to its middle arm, and mirrors it to display both side-by-side.

## 📄 Source File
- [`mirrored f.c`](<mirrored f.c>)

## 🚀 Compilation & Execution
```powershell
gcc "mirrored f.c" -o mirrored_f
.\mirrored_f
```

## 📊 Expected Output Results
```text
*********  *********
*********  *********
*********  *********
***              ***
***              ***
*******      *******
***   *      *   ***
*******      *******
***              ***
***              ***
***              ***
***              ***
***              ***
```

## 🔍 Code Explanation
- **Dynamic Grid Setup**: Uses standard 2D arrays to map out the block letter's stem (solid), top bar (solid), and middle arm.
- **Hollow Arm Section**: Implements boundary-checking rules to draw only the outer outline of the middle arm, leaving the interior cells hollow.
- **Side-by-Side Mirrored Display**: For each row, it constructs the original layout and then mirrors it by reversing the string character-by-character from left to right. It outputs both side-by-side in the console.
