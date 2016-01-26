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
			int cashPerI;
			std::cin >> cashPerI;
			std::cout << "Please enter # items produced: ";
			int numItems;
			std::cin >> numItems;
			std::cout << "Employee has earned: $" << cashPerI*numItems;
			break;
		case 3:
			std::cout << "Please enter $ per hour: $";
			int cashPerH;
			std::cin >> cashPerH;
			std::cout << "Please enter # hours worked: ";
			int numHours;
			std::cin >> numHours;
			std::cout << "Employee has earned: $" << cashPerH*numHours;
			break;
		case 2:
			std::cout << "Please enter total value of sales: $";
			int salesVal;
			std::cin >> salesVal;
			std::cout << "At 5.7% commission and $250 base pay, employee has earned: $"
				<< (salesVal*0.057) + 250;
			break;
		case 1:
			std::cout << "Please enter weekly salary: $";
			break;
		case 0:
			done = true;
			break;
		default:
		}
	}
}