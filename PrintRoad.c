void PrintRoad(int road[NUM_ROWS][NUM_COLS])
{
    int i, j;
	// Using a nested for loop to run through the 2D array
    for (i = 0; i < NUM_ROWS; i++) {
        for (j = 0; j < NUM_COLS; j++) {
			
			// Printing the space character wherever there is 0
            if (road[i][j] == SPACE) {
                printf(" ");
            }
			
			// Printing # wherever there is -1
            else if (road[i][j] == WALL) {
                printf("#");
            }
			
			// Printing O wherever there is -2
            else {
                printf("O");
            }
        }
		// Printing a new line for each new row
        printf("\n");
    }
}
