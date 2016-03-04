#include"Rational.h"
#include <iostream>

using namespace std;

int main() {
	Rational c;

	cout << "Please enter a number from the list below "
		<< "for the corresponding demo: " << endl
		<< " 0 = Full Demo"
		<< " 1 = Addition" << endl
		<< " 2 = Subtraction " << endl
		<< " 3 = Multiplication " << endl
		<< " 4 = Division " << endl;
	int code;
	std::cin >> code;
	cout << endl << "Please enter a numerator for the first Rational: ";
	int numerator;
	cin >> numerator;
	cout << endl << "Please enter a denominator for the first Rational: ";
	int denominator;
	cin >> denominator;
	Rational a(numerator, denominator);

	cout << endl << "Please enter a numerator for the second Rational: ";
	cin >> numerator;
	cout << endl << "Please enter a denominator for the second Rational: ";
	cin >> denominator;
	Rational b(numerator, denominator);
	bool demo = false;

	switch (code) {
	case 0: //Demo
		demo = true;
	case 1:	//Addition
		c = a; //save a's value
		a.add(b);
		a.print();
		cout << endl;
		a.printFloat();
		a = c;	//restore a
		if (!demo) { break; }
	case 2: //Subtraction
		c = a; //save a's value
		a.sub(b);
		a.print();
		cout << endl;
		a.printFloat();
		a = c;	//restore a
		if (!demo) { break; }
	case 3:	//Multiplication
		c = a; //save a's value
		a.mult(b);
		a.print();
		cout << endl;
		a.printFloat();
		a = c;	//restore a
		if (!demo) { break; }
	case 4:	//Division
		c = a; //save a's value
		a.div(b);
		a.print();
		cout << endl;
		a.printFloat();
		a = c;	//restore a
		if (!demo) { break; }
	default:
		cout << "Invalid entry" << endl; //error message
	}
}