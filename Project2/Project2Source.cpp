#include<iostream> //needed for io

int main()
{
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
		case 4:
			std::cout << "Please enter $ earned per item: $";
			double cashPerI;
			std::cin >> cashPerI;
			std::cout << "Please enter # items produced: ";
			double numItems;
			std::cin >> numItems;
			std::cout << "Employee has earned: $" << cashPerI*numItems << std::endl;
			break;
		case 3:
			std::cout << "Please enter total value of sales: $";
			double salesVal;
			std::cin >> salesVal;
			std::cout << "At 5.7% commission and $250 base pay, employee has earned: $"
				<< (salesVal*0.057) + 250 << std::endl;
			break;
		case 2:
			std::cout << "Please enter $ per hour: $";
			double cashPerH;
			std::cin >> cashPerH;
			std::cout << "Please enter # hours worked: ";
			double numHours;
			std::cin >> numHours;
			std::cout << "Employee has earned: $" << cashPerH*numHours << std::endl;
			break;
		case 1:
			std::cout << "Please enter weekly salary: $";
			double weekly;
			std::cin >> weekly;
			std::cout << "Employee has earned: $" << weekly << std::endl;
			break;
		case 0:
			done = true;
			break;
		default:
			std::cout << "Invalid entry" << std::endl;
		}
	}
}