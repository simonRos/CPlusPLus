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
Rational::Rational(int n) {
	numer = n;
	denom = DENOM_DEFAULT;
}
//helper methods
int Rational::gcd(int x, int y) {	//greatest common divisor
	if (y != 0) {
		return gcd(y, x % y);
	}
	else {	//y == 0
		return x;
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
		denom = -denom;
		numer = -numer;
	}
	reduce();
}
//void Rational::reciprocal() {	//convert Rational to its reciprocal
//	set(denom, numer);
//}
Rational Rational::reciprocal() {	//returns reciprocal
	Rational y(denom, numer);
	return y;
}
Rational Rational::operator!() {
	Rational temp = *this;
	temp.reciprocal();
	return temp;
}
void Rational::negate() {	//flip the +/- sign on the Rational
	numer = -numer;
}
Rational Rational::operator-() {
	Rational temp = *this;
	temp.negate();
	return temp;
}
void Rational::add(Rational x) {	//Add
	numer = (numer * x.denom) + (x.numer * denom);
	denom *= x.denom;
	reduce();
}
Rational Rational::operator+(const Rational &x) const {
	Rational temp = *this;
	temp.add(x);
	return temp;
}
void Rational::sub(Rational x) {	//Subtract
	negate();
	add(x);
	reduce();
}
Rational Rational::operator-(const Rational &x) const {
	Rational temp = *this;
	temp.sub(x);
	return temp;
}
void Rational::mult(Rational x) {	//Multiply...a.mult(b) or a=a*b
	numer *= x.numer;
	denom *= x.denom;
	reduce();
}
Rational Rational::operator*(const Rational &x) const {
	Rational temp = *this;
	temp.mult(x);
	return temp;
}
void Rational::div(Rational x) {	//Divide
	mult(x.reciprocal());
	reduce();
}
Rational Rational::operator/(const Rational &x) const {
	Rational temp = *this;
	temp.div(x);
	return temp;
}
//comparison operators
bool Rational::operator==(const Rational &x) const {
	Rational temp = *this;
	if (temp.denom != x.denom) { return false; }	//different denoms in simplest form means not equal
	else if (temp.numer == x.numer) { return true; }	//same denoms and same numers means equal
	else { return false; }	//same denom, differente numers means not equal
}
bool Rational::operator!=(const Rational &y) const {
	return !(*this == y);
}
bool Rational::operator<(const Rational &z) const {
	Rational leftRat = *this;
	Rational rightRat = z;
	int rightInt = (leftRat.numer * rightRat.denom);
	int leftInt = (rightRat.numer *leftRat.denom);
	return (leftInt < rightInt);
}
bool Rational::operator<=(const Rational &a) const {
	Rational leftRat = *this;
	Rational rightRat = a;
	int rightInt = (leftRat.numer * rightRat.denom);
	int leftInt = (rightRat.numer *leftRat.denom);
	return (leftInt <= rightInt);
}
bool Rational::operator>(const Rational &b) const {
	Rational leftRat = *this;
	Rational rightRat = b;
	int rightInt = (leftRat.numer * rightRat.denom);
	int leftInt = (rightRat.numer *leftRat.denom);
	return (leftInt > rightInt);
}
bool Rational::operator>=(const Rational &c) const {
	Rational leftRat = *this;
	Rational rightRat = c;
	int rightInt = (leftRat.numer * rightRat.denom);
	int leftInt = (rightRat.numer *leftRat.denom);
	return (leftInt >= rightInt);
}
void Rational::print() {	//print Rational to console
	cout << numer << '/' << denom;
}
double Rational::getFloat() {	//print Rational in float form to console
	return double(double(numer) / (denom));
}