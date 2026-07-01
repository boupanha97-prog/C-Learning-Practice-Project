# 🖨️ Print name, DOB, and mobile number

A practice module exploring string formatting in C, demonstrating simple printing, right-aligned outputs, and custom zero-padded alignment systems.

## 📂 Source Files
- [1. simple print/simple.c](<1. simple print/simple.c>)
- [2. print right aligned/right_aligned.c](<2. print right aligned/right_aligned.c>)
- [3. print zero padded/zero_padded.c](<3. print zero padded/zero_padded.c>)

## 🚀 Compilation & Execution
Navigate to the desired subfolder and compile using GCC:

### 1. Simple Print
```powershell
cd "1. simple print"
gcc simple.c -o simple
.\simple
```

### 2. Print Right Aligned
```powershell
cd "2. print right aligned"
gcc right_aligned.c -o right_aligned
.\right_aligned
```

### 3. Print Zero Padded
```powershell
cd "3. print zero padded"
gcc zero_padded.c -o zero_padded
.\zero_padded
```

## 📊 Expected Output Results

### 1. Simple Print Output
```text
Name: Bou
DOB: July 14, 1975
Mobile:  0123456789
```

### 2. Print Right Aligned Output
```text
Full Name      :                 Bou Panha
Date of Birth  :                15-09-1995
Mobile Number  :                 123456789
```

### 3. Print Zero Padded Output
```text
Full Name      : 00000000000Bou Panha
Date of Birth  : 000000012-March-2006
Mobile Number  : 00000000000123456789
```

