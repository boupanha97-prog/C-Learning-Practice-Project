#include <stdio.h>
#include <string.h>

#define LETTER_SIZE  5
#define NUM_LETTERS  6
#define GAP          2
#define ROW_STEP     3                              /* zigzag rise/fall   */
#define CANVAS_ROWS (LETTER_SIZE + ROW_STEP)
#define CANVAS_COLS (NUM_LETTERS * (LETTER_SIZE + GAP))

static int F[LETTER_SIZE][LETTER_SIZE] = {
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,1,1,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0}
};

static int C[LETTER_SIZE][LETTER_SIZE] = {
    {0,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {0,1,1,1,1}
};

int main() {
    char canvas[CANVAS_ROWS][CANVAS_COLS];
    memset(canvas, ' ', sizeof(canvas));

    for (int i = 0; i < NUM_LETTERS; i++) {
        int isF = (i % 2 == 0);
        int (*letter)[LETTER_SIZE] = isF ? F : C;
        int rowOffset = isF ? 0 : ROW_STEP;      /* alternate up / down  */
        int colOffset = i * (LETTER_SIZE + GAP);

        for (int r = 0; r < LETTER_SIZE; r++) {
            for (int c = 0; c < LETTER_SIZE; c++) {
                if (letter[r][c]) {
                    canvas[rowOffset + r][colOffset + c] = '*';
                }
            }
        }
    }

    for (int r = 0; r < CANVAS_ROWS; r++) {
        for (int c = 0; c < CANVAS_COLS; c++) {
            putchar(canvas[r][c]);
        }
        putchar('\n');
    }

    return 0;
}
