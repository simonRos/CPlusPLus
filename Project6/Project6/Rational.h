#ifndef RAT.H
#define RAT.H

class Rational {	//rational number
private:
	int numer;
	int denom;	//No zeroes & no negatives
	int gcd();	//greatest common denomonator
				//make it recursive, see p.262-263
	void reduce();	//use to keep numbers in reduced form
					//ex if (numerator == 0){denominator = 1};

public:
	void add(Rational);	//a.add(b) or a=a+b
	void sub(Rational);
	void mult(Rational);
	void div(Rational);
	void print();
	void printfloat();
	Rational(int, int);
	Rational;	//default to 0/1
	void set(int, int);

}
#endif
