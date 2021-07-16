#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 8
#define NUM_COLS 8

#define SPACE 0
#define WALL -1
#define EXIT -2

void InitialiseRoad(int road[NUM_ROWS][NUM_COLS], char side, int pos)
{
    int i, j;

    // Nested for loop to run through 2D array and set -1 to the walls and 0 to the spaces inside.
    for (i = 0; i < NUM_ROWS; i++) {
        for (j = 0; j < NUM_COLS; j++) {
            if (i == 0 || i == (NUM_ROWS - 1) || j == 0 || j == (NUM_COLS -1)) {
                road[i][j] = WALL;
            }
            else {
                road[i][j] = SPACE;
            }
        }
    }
    
    // If statements to set -2 to the required position based on the inputs.
    if (side == 'N') {
        road[0][pos] = EXIT;
    }
    else if (side == 'S') {
        road[NUM_ROWS - 1][pos] = EXIT;
    }
    else if (side == 'W') {
        road[pos][0] = EXIT;
    }
    else if (side == 'E') {
        road[pos][NUM_COLS - 1] = EXIT;
    }
}

int main(void)
{
	int road[NUM_ROWS][NUM_COLS];

	InitialiseRoad(road, 'W', 3);

    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            printf("%d ", road[i][j]);
        }
        printf("\n");
    }

	return 0;
}
