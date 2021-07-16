double PercentUsed(int road[NUM_ROWS][NUM_COLS])
{
    int i, j;
    int counter = 0;
    
	// Nested for loop to run through the 2D array
    for (i = 1; i < NUM_ROWS - 1; i++) {
        for (j = 1; j < NUM_COLS - 1; j++) {
			// If a value is not 0 in the specified area, add 1 to the counter
            if (road[i][j] != SPACE) {
                counter++;
            }
        }
    }
    
	// Calculate percentage of space used
    double percentage = 100 * (double)counter/((NUM_ROWS - 2)*(NUM_COLS - 2));  
    
    return percentage;
}
