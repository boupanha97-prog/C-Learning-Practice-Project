# 🇰🇭 Khmer Numeral System for Calling Money

A C program that parses integer monetary amounts and prints the corresponding spoken Khmer currency terms (មួយ, ពីរ, ដប់, ម្ភៃ, រយ, ពាន់, មុឺន, សែន, លាន, កោដ).

## 📄 Source File
- [`khmer_calling_money.c`](khmer_calling_money.c)

## 🚀 Compilation & Execution
```powershell
gcc khmer_calling_money.c -o khmer_calling_money
.\khmer_calling_money
```

## 📊 Expected Output Results
```text
បញ្ជូលលុយរបស់អ្នក: 12345
មួយមុឺនពីរពាន់បីរយសែសិបប្រាំ
```

## 🔍 Source Code Explanation

The program [`khmer_calling_money.c`](khmer_calling_money.c) translates numbers into traditional spoken Khmer monetary values:
1. **Input**: Prompts the user to enter a numeric amount.
2. **Decomposition**:
   A `for` loop extracts each decimal digit from right to left using modulo 10 (`n % 10`) and stores them in the array `a`, with `i` keeping track of the count of digits (1-indexed).
3. **Iterative Translation**:
   The program then processes the digits in reverse order (`j = i - 1` down to `1`). If a digit `a[j]` is non-zero, a `switch` statement processes its spoken term based on its digit column position:
   - **`case 1` (Units)**: Calls helper `Reay(a[j])` to translate numbers `1` to `9` (e.g. មួយ, ពីរ, ...).
   - **`case 2` (Tens)**: Calls helper `Dob(a[j])` to translate tens multiples (e.g. ដប់ (10), ម្ភៃ (20), សាមសិប (30), ...).
   - **`case 3` (Hundreds)**: Calls `Reay(a[j])` and appends `រយ` (Roy).
   - **`case 4` (Thousands)**: Calls `Reay(a[j])` and appends `ពាន់` (Poan).
   - **`case 5` (Ten Thousands)**: Calls `Reay(a[j])` and appends `មុឺន` (Meun).
   - **`case 6` (Hundred Thousands)**: Calls `Reay(a[j])` and appends `សែន` (Saen).
   - **`case 7` (Millions)**: Calls `Reay(a[j])` and appends `លាន` (Lean).
   - **`case 8` (Ten Millions / Crores)**: Calls `Reay(a[j])` and appends `កោដ` (Kaot).


