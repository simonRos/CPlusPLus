//Establish fixed maze '#' is a wall, '.' is a path
char maze[12][12] = {
	{ '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
	{ '#', '.', '.', '.', '#', '.', '.', '#', '.', '.', '.', '#' },
	{ '#', '.', '#', '.', '#', '.', '#', '#', '.', '#', '.', '#' },
	{ '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },
	{ '#', '.', '.', '.', '.', '#', '.', '#', '.', '#', '.', '#' },
	{ '#', '.', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
	{ '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '#', '#' },
	{ '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '.' },
	{ '#', '.', '.', '.', '.', '.', '.', '#', '.', '#', '.', '#' },
	{ '#', '#', '.', '#', '#', '#', '.', '#', '.', '#', '.', '#' },
	{ '.', '.', '.', '.', '.', '#', '.', '#', '.', '.', '.', '#' },
	{ '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
};

//set starting and ending points DIFFERENT!
int startRow = 10;
int startCol = 0;
int endRow = 7;
int endCol = 11;