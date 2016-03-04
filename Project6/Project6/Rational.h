#ifndef RAT_H
#define RAT_H

class Rational {	//rational number
private:
	//vars
	int numer;	//numerator
	int denom;	//denomonator
				//functions
	int gcd(int, int);	//greatest common divisor
						//make it recursive, see p.262-263
	void reduce();	//use to keep numbers in reduced form
					//ex if (numerator == 0){denominator = 1};

public:
	//Constructor
	Rational();
	Rational(int, int);
	//functions
	int getDenom();
	int getNumer();
	void set(int, int);
	void reciprocal();
	void negate();
	void add(Rational);	//a.add(b) or a=a+b
	void sub(Rational);
	void mult(Rational);
	void div(Rational);
	void print();
	void printFloat();
};

#endif
