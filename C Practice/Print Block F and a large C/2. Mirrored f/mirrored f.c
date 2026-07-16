#include <stdio.h>

#define ROWS 13
#define COLS 9

int main() {
    int filled[ROWS][COLS];
    int isArm[ROWS][COLS];   /* the part we'll render hollow */

    /* Build a block letter F:
         - solid vertical stem  -> columns 0-2, every row
         - solid full-width top bar -> rows 0-2
         - protruding middle arm    -> rows 5-7, columns 3-6
           (this arm is the "hollow middle section"; the stem
            and top bar stay fully solid so the F stays legible) */
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            int isStem   = (c <= 2);
            int isTopBar = (r <= 2);
            isArm[r][c]  = (r >= 5 && r <= 7 && c >= 3 && c <= 6);
            filled[r][c] = (isStem || isTopBar || isArm[r][c]) ? 1 : 0;
        }
    }

    for (int r = 0; r < ROWS; r++) {
        char line[COLS + 1];

        for (int c = 0; c < COLS; c++) {
            if (!filled[r][c]) {
                line[c] = ' ';
                continue;
            }
            if (!isArm[r][c]) {
                line[c] = '*';   /* stem / top bar: always solid */
                continue;
            }
            /* Arm cells: only the outline (cells touching empty
               space) are drawn; the interior is left hollow.     */
            int onBorder =
                (r == 0        || filled[r-1][c] == 0) ||
                (r == ROWS - 1 || filled[r+1][c] == 0) ||
                (c == 0        || filled[r][c-1] == 0) ||
                (c == COLS - 1 || filled[r][c+1] == 0);
            line[c] = onBorder ? '*' : ' ';
        }
        line[COLS] = '\0';

        /* Mirror the row by reversing it left-to-right */
        char mirrored[COLS + 1];
        for (int c = 0; c < COLS; c++) {
            mirrored[c] = line[COLS - 1 - c];
        }
        mirrored[COLS] = '\0';

        printf("%s  %s\n", line, mirrored);
    }

    return 0;
}