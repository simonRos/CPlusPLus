//Simon Rosner
//3/2/2016
//This is the header class for the Rational.cpp class

#ifndef RAT_H
#define RAT_H

class Rational {	//rational number
private:
	//vars
	int numer;	//numerator
	int denom;	//denomonator
	//functions
	int gcd(int, int);	//greatest common divisor
	void reduce();	//use to keep numbers in reduced form
	int getDenom();	//I threw these two in to experiment
	int getNumer();	//As far as i can tell they are the same as
					//x.numer
					//x.denom

public:
	//Constructor
	Rational();	//default
	Rational(int, int);	//full
	Rational(int);	//numerator only
	//functions
	void negate();	//negates the Rational
	void set(int, int);	//set
	void add(Rational);	//a.add(b) or a=a+b
	void sub(Rational);	//subtract
	void mult(Rational);//multiply
	void div(Rational);	//divide
	Rational reciprocal(Rational);// return reciprocal
	void print();	//print to console
	double getFloat();	//return float version. Still under construction
};

#endif
