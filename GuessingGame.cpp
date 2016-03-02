//Simon Rosner
//2/3/2016
//This program tasks the player with guessing a number. 
//The player is given written feedback upon completion.

#include<stdlib.h>	//needed for random number gen
#include<iostream>	//needed for io
#include<ctime>	//needed for rand num gen seeding
#include<string> //for cout-ing string

using std::string; //used to make string function getResult
//using namespace std;	//QUESTION: When should I use this instead of typing out 'std' everytime it is needed?

int roll(int maxRand) {	//function to set target
	srand((unsigned int)time(NULL));
	return rand() % maxRand + 1;
}

string getResult(int guesses) {	//provides response to player performance when called
#define MAXGUESS 10 //The win limit number of guesses
	if (guesses > MAXGUESS) {	//too many guesses
		return "You should be able to do better!";
	}
	else if (guesses < MAXGUESS) {	//too few guesses
		return "Either you know the secret or you got lucky!";
	}
	else {	//perfect number of guesses
		return "Ahah! You know the secret!";
	}
}

int main() {
#define MAXRAND 1000 //The largest possible random number

	std::cout << "Welcome!";
	bool retry = true;
	while (retry) {	//check for retry
		bool won = false;
		int target = roll(MAXRAND);
		int numGuesses = 0; //number of guesses taken
		while (!won) {	//check for gameover
			std::cout << " Guess a number: ";
			int guess;
			std::cin >> int(guess);	//tried typecasting to avoidbad user input. Did not work.
			numGuesses++;	//increase number of guesses taken
			if (guess == target) {	//perfect guess
				won = true;
			}
			else if (std::cin.fail()) {	//deals with bad user input
				numGuesses--;
				std::cout << "Integers only please.";
				std::cin.clear();	//clear flags
				std::cin.ignore();	//clear buffer
			}
			else if (guess < target) {	//low guess
				std::cout << "Your guess is too low.";
			}
			else if (guess > target) {	//high guess
				std::cout << "Your guess is too high.";
			}
		}
		std::cout << getResult(numGuesses);
		string again = "again?";
		while (again.at(0) != 'y' & again.at(0) != 'n') { //get input for newgame. repeat until valid
			std::cout << "Play Again? [y/n]";
			std::cin >> again;
			if (again.at(0) == 'n') {
				retry = false;
			}
			else if (again.at(0) == 'y') {
				retry = true;
			}
			else {
				std::cout << "Please enter 'y' or 'n' ";
			}
		}
	}
}
