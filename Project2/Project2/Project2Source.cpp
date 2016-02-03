//Simon Rosner
//2/2/2016
//This program calculated weekly pay for emplyees based on their pay criteria.

#include<iostream> //needed for io
	
int main()
{
	#define COMMISHBASE 250 //commission base pay
	#define COMMISHRATE 0.057 //commission rate
	#define OVERTIMERATE 1.5 //overtime rate
	#define WORKABLEHOURS 40 //total hours that can be worked without overtime
	
	bool done = false; //loop control variable
	while (!done)
	{
		std::cout << "Please enter a number listed below: " << std::endl //user prompt
			<< " 4 = Pieceworker" << std::endl
			<< " 3 = Commission" << std::endl
			<< " 2 = Hourly" << std::endl
			<< " 1 = Manager (Salaried)" << std::endl
			<< " 0 = [close program]" << std::endl;
		int code;	//switch control variable
		std::cin >> code;
		switch (code)
		{
		case 4: //Pieceworker
			std::cout << "Please enter $ earned per item: $";
			double cashPerI;
			std::cin >> cashPerI;
			std::cout << "Please enter # items produced: ";
			double numItems;
			std::cin >> numItems;
			std::cout << "Employee has earned: $" << cashPerI*numItems << std::endl;
			break;
		case 3: //Commission
			std::cout << "Please enter total value of sales: $";
			double salesVal;
			std::cin >> salesVal;
			std::cout << "At "<< COMMISHRATE
			    <<" commission and "<< COMMISHBASE
			    <<" base pay, employee has earned: $"
				<< (salesVal*COMMISHRATE) + COMMISHBASE << std::endl;
			break;
		case 2: //Hourly
			std::cout << "Please enter $ per hour: $";
			double cashPerH;
			std::cin >> cashPerH;
			std::cout << "Please enter # hours worked: ";
			double numHours;
			std::cin >> numHours;
			double totalPayHourly;
			if(numHours > WORKABLEHOURS){
			    totalPayHourly = ((numHours-WORKABLEHOURS)*(OVERTIMERATE*cashPerH))+(WORKABLEHOURS*cashPerH);
			}
			else{
			    totalPayHourly = numHours*cashPerH;
			}
			std::cout << "Employee has earned: $" << totalPayHourly << std::endl;
			break;
		case 1: //Manager(salaried)
			std::cout << "Please enter weekly salary: $";
			double weekly;
			std::cin >> weekly;
			std::cout << "Employee has earned: $" << weekly << std::endl;
			break;
		case 0: //end loop
			done = true;
			break;
		default:
			std::cout << "Invalid entry" << std::endl; //error message
		}
	}
}
