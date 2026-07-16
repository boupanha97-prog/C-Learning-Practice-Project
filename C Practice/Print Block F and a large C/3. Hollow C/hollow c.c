#include <stdio.h>

#define ROWS 13
#define COLS 11

int main() {
    int filled[ROWS][COLS];
    int border[ROWS][COLS];

    /* Block letter C: thick top bar, thick bottom bar, thick left
       bar, open on the right side (like a squared-off bracket). */
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            int isTopBar    = (r <= 2);
            int isBottomBar = (r >= ROWS - 3);
            int isLeftBar   = (c <= 2);
            filled[r][c] = (isTopBar || isBottomBar || isLeftBar) ? 1 : 0;
        }
    }

    /* Pass 1: outer border = any filled cell touching empty space
       or the grid edge. This ring is the "highlight" layer.       */
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (!filled[r][c]) { border[r][c] = 0; continue; }
            border[r][c] =
                (r == 0        || filled[r-1][c] == 0) ||
                (r == ROWS - 1 || filled[r+1][c] == 0) ||
                (c == 0        || filled[r][c-1] == 0) ||
                (c == COLS - 1 || filled[r][c+1] == 0);
        }
    }

    /* Pass 2: render three layers -
       '#' outer border highlight, '*' inner ring next to it,
       blank for the deep hollow interior (the inner space pattern). */
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (!filled[r][c]) {
                putchar(' ');
                continue;
            }
            if (border[r][c]) {
                putchar('#');
                continue;
            }
            int nextToBorder =
                (r > 0        && border[r-1][c]) ||
                (r < ROWS - 1 && border[r+1][c]) ||
                (c > 0        && border[r][c-1]) ||
                (c < COLS - 1 && border[r][c+1]);
            putchar(nextToBorder ? '*' : ' ');
        }
        putchar('\n');
    }

    return 0;
}
