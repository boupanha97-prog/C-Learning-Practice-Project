#include <stdio.h>

#define ROWS 13
#define COLS 9

int main() {
    int filled[ROWS][COLS];
    int isArm[ROWS][COLS];
    int rotated[COLS][ROWS];   /* rotating an RxC grid gives a CxR grid */

    /* Same F design as program 1: solid stem + solid top bar,
       with a hollow protruding middle arm. */
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            int isStem   = (c <= 2);
            int isTopBar = (r <= 2);
            isArm[r][c]  = (r >= 5 && r <= 7 && c >= 3 && c <= 6);
            filled[r][c] = (isStem || isTopBar || isArm[r][c]) ? 1 : 0;
        }
    }

    /* Render the hollow rule into a simple char grid first */
    char shape[ROWS][COLS];
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (!filled[r][c]) {
                shape[r][c] = ' ';
            } else if (!isArm[r][c]) {
                shape[r][c] = '*';
            } else {
                int onBorder =
                    (r == 0        || filled[r-1][c] == 0) ||
                    (r == ROWS - 1 || filled[r+1][c] == 0) ||
                    (c == 0        || filled[r][c-1] == 0) ||
                    (c == COLS - 1 || filled[r][c+1] == 0);
                shape[r][c] = onBorder ? '*' : ' ';
            }
        }
    }

    /* Rotate 90 degrees clockwise: an R x C grid becomes C x R,
       with new[i][j] = old[R-1-j][i]                              */
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            rotated[i][j] = shape[ROWS - 1 - j][i];
        }
    }

    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            putchar(rotated[i][j]);
        }
        putchar('\n');
    }

    return 0;
}