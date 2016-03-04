#include"Rational.h"

int main() {
	Rational a;
	Rational b;
	Rational c;

	c = a; //save a's value
	a.add(b);
	a.print();
	a = c; //restore a
	a.sub(b);
	a.print();
	a = c;  // same for mult and div
}