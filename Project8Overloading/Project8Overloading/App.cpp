//Simon Rosner
//3/2/2016
//This application provides the user with an interactive demo of Rational.cpp

#include"Rational.h"
#include <iostream>

using namespace std;

int main() {
	Rational c;

	cout << "Please enter a number from the list below "
		<< "for the corresponding demo: " << endl
		<< " 0 = Full Demo" << endl
		<< " 1 = Addition" << endl
		<< " 2 = Subtraction " << endl
		<< " 3 = Multiplication " << endl
		<< " 4 = Division " << endl
		<< " 5 = Negation " << endl
		<< " 6 = Reciprocal" << endl
		<< " 7 = Comparisons" << endl;
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
		cout << "Addition" << endl;
		c = a + b;
		c.print();
		if (!demo) { break; }
	case 2: //Subtraction
		cout << "Subtraction" << endl;
		c = a - b;
		c.print();
		if (!demo) { break; }
	case 3:	//Multiplication
		cout << "Multiplication" << endl;
		c = a*b;
		c.print();
		if (!demo) { break; }
	case 4:	//Division
		cout << "Division" << endl;
		c = a / b;
		c.print();
		if (!demo) { break; }
	case 5:	//Negation
		cout << "Negation of first Rational" << endl;
		c = -a;
		c.print();
		cout << "Negation of second Rational" << endl;
		c = -b;
		c.print();
		if (!demo) { break; }
	case 6:	//Reciprocal
		cout << "Reciprocal of first Rational" << endl;
		c = !a;
		c.print();
		cout << "Reciprocal of second Rational" << endl;
		c = !b;
		c.print();
		if (!demo) { break; }
	case 7:	//Comparisons
		cout << "a == b ";
		if (a == b) {
			cout << true << endl;
		}
		else { cout << false << endl; }
		cout << "a != b ";
		if (a != b) {
			cout << true << endl;
		}
		else { cout << false << endl; }
		cout << "a < b ";
		if (a < b) {
			cout << true << endl;
		}
		else { cout << false << endl; }
		cout << "a <= b ";
		if (a <= b) {
			cout << true << endl;
		}
		else { cout << false << endl; }
		cout << "a < b ";
		if (a == b) {
			cout << true << endl;
		}
		else { cout << false << endl; }
		cout << "a <= b ";
		if (a == b) {
			cout << true << endl;
		}
		else { cout << false << endl; }
		break;
	default:
		cout << "Invalid entry" << endl; //error message
	}
}