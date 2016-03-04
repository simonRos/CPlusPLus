//Simon Rosner
//3/2/2016
//This class represents Rational numbers

#include"Rational.h"	//header file
#include <iostream>	//for IO
#include <string>	//for String methods
//named constants
#define NUMER_DEFAULT 0;	//default numerator
#define DENOM_DEFAULT 1;	//default denominator

using namespace std;
//Constructors
Rational::Rational() {	//default constructor
	numer = NUMER_DEFAULT;
	denom = DENOM_DEFAULT;
}
Rational::Rational(int n, int d) {	//additional constructor
	set(n, d);
}
//helper methods
int Rational::gcd(int x, int y) {	//greatest common divisor
	if (y == 0) {	//base case...if last x % y = 0
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}
void Rational::reduce() {	//reduce fraction to simplest form
	int g = gcd(numer, denom);	//find greatest common divisor...
	numer = numer / g;	//divide both numerator...
	denom = denom / g;	//and denominator by it
}
//other methods
int Rational::getNumer() {	//get numerator
	return numer;
}
int Rational::getDenom() {	//get denomintor
	return denom;
}
void Rational::set(int n, int d) {	//set rational
	numer = n;
	denom = d;
	if (denom <= 0) {	//denom cannot be 0 or negative
		cout << "Invalid denominator: " << d << "Defaulting to: " << DENOM_DEFAULT;
		denom = DENOM_DEFAULT;
	}
	reduce();
}
void Rational::reciprocal() {	//convert Rational to its reciprocal
	set(denom, numer);
}
void Rational::negate() {	//flip the +/- sign on the Rational
	numer *= 1;
}
void Rational::add(Rational x) {	//double check this one
	numer = (numer*x.denom) + (x.numer*denom);
	denom *= x.denom;
	reduce();
}
void Rational::sub(Rational x) {

}
void Rational::mult(Rational x) {	//Multiply...a.mult(b) or a=a*b
	numer *= x.numer;
	denom *= x.denom;
	reduce();
}
void Rational::div(Rational x) {

}
void Rational::print() {
	cout << numer << '/' << denom;
}
void Rational::printFloat() {

}
