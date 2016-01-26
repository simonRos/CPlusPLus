//Simon Rosner
//1.22.2016
//Takes integers or doubles input by the user and finds the max, min, sum, product, and average.

#include <iostream> //include input and outpput capability
#include <limits>   //I didn't get this working but i intended to use limits

int main()
{
	// variable declarations
	int count;  //for scaling purposes. The user can enter andy number of numbers
	//double max = -DBL_MAX;
	//double min = DBL_MAX;
	double max = -9999999999;   //arbitrary small number
	double min = 9999999999;    //arbitrary large number
	double curr;    //most recently entered number
	double sum;	//running sum
	double product = 1;	//running product. Initialized as 1 to avoid multiplecation errors.

	std::cout << "How many numbers will you be entering? ";
	std::cin >> count; //get number of loops from user

	int i;
	for (i = 0; i<count; i++){
		std::cout << "Please enter a number: "; //prompt user
		std::cin >> curr;   //store user input
		sum = sum + curr;   //add to running sum to be later used to calculate average
		product = product*curr;	//calculates running product
		if (curr > max){    //check if current number is max
			max = curr;
		}
		if (curr < min){     //check if current number is min
			min = curr;
		}
	}

	double ave = sum / count; //calculates average
	std::cout << "Average: " << ave
		<< " Sum: " << sum
		<< " Product: " << product
		<< " Min: " << min
		<< " Max: " << max
		<< std::endl; //output
	return 0;   //end
}
