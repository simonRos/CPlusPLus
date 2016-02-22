#include"Rational.h"

using namespace std;

Rational::Rational() {	//default constructor
	numer = 0;
	denom = 1;
}

Rational::Rational(int n, int d) {
	numer = n;
	denom = d;
	reduce();
}

Rational::add(Rational x) {	//double check this one
	numer = (numer*x.denom) + (x.numer*denom)
		denom *= x.denom
}

Rational::mult(Rational x) {	//a.mult(b) or a=a*b
	numer *= x.numer
		denom *= x.denom
		reduce();
}

Rational::print() {
	cout << numer << '/' << denom;
}