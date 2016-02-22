//Simon Rosner
//2/17/2016
//This program represents a mouse trying to make its way through a maze
//The mouse may move only one space at a time vertically or horizontally
//The mouse may not occupy the same space as a wall, represented by '#'

#include "mazelayout3.h"	//include maze
#include <array>	//for array manipulation. May or may not actually be used
#include <iostream>	//io

using namespace std; //makes io easier to code

					 //instance variables:
int xCor = startRow;	//note that 'x' and 'y' are arbitrary
int yCor = startCol;	//they do not represent vertical and horizontal
int dir = 0;	//0EastRight> 1SouthDownv 2WestLeft< 3NorthUp^
int mouseMem[12][12] = { 0 };	//mouse memory map

bool check(int x, int y) { //checks to see if space is walled/dead end-false or open-true
	if (maze[x][y] == '#' || maze[x][y] == 'X' || x < 0 || y < 0) {	//trip if space is invalid
		return false;
	}
	else if (mouseMem[x][y] >= 4) {	//trips if mouse has been here too many times
		return false;
	}
	else
	{
		return true;
	}
};

char printMouse(int heading) {	//print mouse according to new direction
	char outHeading;
	switch (heading) {
	case 0:
		outHeading = '>';
		break;
	case 1:
		outHeading = 'v';
		break;
	case 2:
		outHeading = '<';
		break;
	case 3:
		outHeading = '^';
		break;
	};
	return outHeading;
};

void step(int heading) {	//moves the mouse to a new location
	switch (heading) {
	case 0:	//currently facing right >
		if (check(xCor + 1, yCor)) {	//can go right V
			dir = 1;
			maze[xCor][yCor] = 'S';
			xCor++;
			break;
		}
		else if (check(xCor, yCor + 1)) {	//can go straight >
			maze[xCor][yCor] = 'E';
			yCor++;

			break;
		}
		else if (check(xCor - 1, yCor)) {	//can go left ^
			dir = 3;
			maze[xCor][yCor] = 'N';
			xCor--;

			break;
		}
		else {	//must go back. direction does not change
			maze[xCor][yCor] = 'X';
			yCor--;
			break;
		}
	case 1:	//currently facing down v
		if (check(xCor, yCor - 1)) {	//can go right <
			dir = 2;
			maze[xCor][yCor] = 'W';
			yCor--;

			break;
		}
		else if (check(xCor + 1, yCor)) {	//can go straight v
			maze[xCor][yCor] = 'S';
			xCor++;

			break;
		}
		else if (check(xCor, yCor + 1)) {	//can go left >
			dir = 0;
			maze[xCor][yCor] = 'E';
			yCor++;

			break;
		}
		else {	//must go back
			maze[xCor][yCor] = 'X';
			xCor--;
			break;
		}
	case 2:	//currently facing left <
		if (check(xCor - 1, yCor)) {	//can go right ^
			dir = 3;
			maze[xCor][yCor] = 'N';
			xCor--;

			break;
		}
		else if (check(xCor, yCor - 1)) {	//can go straight <
			maze[xCor][yCor] = 'W';
			yCor--;

			break;
		}
		else if (check(xCor + 1, yCor)) {	//can go left v
			dir = 1;
			maze[xCor][yCor] = 'S';
			xCor++;

			break;
		}
		else {	//must go back
			maze[xCor][yCor] = 'X';
			yCor++;
			break;
		}
	case 3:	//currently facing up ^
		if (check(xCor, yCor + 1)) {	//can go right >
			dir = 0;
			maze[xCor][yCor] = 'E';
			yCor++;

			break;
		}
		else if (check(xCor - 1, yCor)) {	//can go straight ^
			maze[xCor][yCor] = 'N';
			xCor--;

			break;
		}
		else if (check(xCor, yCor - 1)) {	//can go left <
			dir = 2;
			maze[xCor][yCor] = 'W';
			yCor--;

			break;
		}
		else {	//must go back
			maze[xCor][yCor] = 'X';
			xCor++;
			break;
		};
	}
	maze[xCor][yCor] = printMouse(dir);
	mouseMem[xCor][yCor] = mouseMem[xCor][yCor] + 1;
};

void showArray() {	//prints the array to the console
	for (int y = 0; y < 12; y++) {	//how do you get array length?
		for (int x = 0; x < 12; x++) {	//hard coded until I can find a solution
										//if (x == xCor && y == yCor) {
										//cout << printMouse(dir);
										//}
										//else {
			cout << maze[y][x] << " ";	//spaces for better aesthetic
										//}
		}
		cout << endl;
	}
};

int main() {
	maze[xCor][yCor] = printMouse(dir);
	showArray();
	while (xCor != endRow || yCor != endCol) {	//run until mouse is at end coordinates
		step(dir);
		showArray();
		//system("pause");
	};
	system("pause");
};