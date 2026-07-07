# 🎲 Kla Klok (Bau Cua / Fish-Prawn-Crab) Game

An interactive console simulation of the traditional Cambodian Kla Klok dice betting game, implemented with random dice rolling (`rand`) and betting state logic.

## 📄 Source File
- [`kla_klok.c`](kla_klok.c)

## 🚀 Compilation & Execution
```powershell
gcc kla_klok.c -o kla_klok
.\kla_klok
```

## 📊 Expected Output Results
*(Note: Dice results are randomized, so results will vary per run.)*
```text
Welcome to Big Money 
____ 
ជ្រើសរើសលេខសំណាងរបស់អ្នក: 1.ក្តាម, 2.ខ្លា, 3.បង្កង, 4.មាន់, 5.ឃ្លោក, 6.ត្រី 
ជ្រើសរើស: 2
ដាក់លុយ: 1000
លទ្ធផល: មាន់ ខ្លា ឃ្លោក
 ខ្មោចអោយ អ្នកឈ្នះបាន: 1000
 ចាក់ថែមដើម្បីខ្លាយជាអ្នកមាន
```

## 🔍 Source Code Explanation

The program [`kla_klok.c`](kla_klok.c) replicates the traditional board game:
1. **Dice Setup**: Map numbers 1 to 6 to the traditional game animals:
   - `1` $\rightarrow$ ក្តាម (Crab)
   - `2` $\rightarrow$ ខ្លា (Tiger)
   - `3` $\rightarrow$ បង្កង (Lobster)
   - `4` $\rightarrow$ មាន់ (Chicken)
   - `5` $\rightarrow$ ឃ្លោក (Gourd)
   - `6` $\rightarrow$ ត្រី (Fish)
2. **User Bet**: Prompts the user to pick their lucky number (`ln`, 1-6) and bet amount (`m`).
3. **Random Roll**: Seeds the randomizer with current time `srand(time(0))` to guarantee different results on each execution, then rolls 3 independent dice (`i`, `j`, `k`) using `rand() % 6 + 1`.
4. **Result Presentation**: Uses three consecutive `switch` blocks to print the Khmer text corresponding to the rolled numbers.
5. **Win/Loss Check**: Matches each die against the player's choice (`ln`). If a die matches, the bet amount `m` is added to the win total. If no dice match, it prompts them to try again.


