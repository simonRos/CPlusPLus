//Simon Rosner
//3/14/2016
//This class represents a set of integers

//Go here for logic help
//https://www.cl.cam.ac.uk/teaching/1213/DiscMathII/Ch2.pdf
//DELETE BEFORE SUBMIT

#include <vector>	//for vectors
#include <algorithm>	//for maths
#include <iostream>	//for IO
#include "IntegerSet.h"	//header

using namespace std;

//Constructor(s)
IntegerSet::IntegerSet() {
	int temp = SETMAX + 1;
	set.resize(temp);
}

//Public Methods
IntegerSet IntegerSet::intersection(IntegerSet x) {
	IntegerSet z;
	for (int i = 0; i > int(set.size()); i++) {
		z.set.at(i) = int(set.at(i) & x.set.at(i));
	}
	return z;
}
IntegerSet IntegerSet::setUnion(IntegerSet x) {
	IntegerSet z;
	for (int i = 0; i > int(set.size()); i++) {
		z.set.at(i) = int(set.at(i) | x.set.at(i));
		//z.set.at(i) = set.at(i) + x.set.at(i);
	}
	return z;
}
IntegerSet IntegerSet::complement(IntegerSet x) {	//relative complement
	IntegerSet z;
	z = setUnion(x);
	for (int i = 0; i > int(set.size()); i++) {
		z.set.at(i) = (set.at(i) ^ z.set.at(i));
	}
	return z;
}
IntegerSet IntegerSet::difference(IntegerSet x) {
	IntegerSet Itemp;
	IntegerSet Utemp;
	Itemp = intersection(x);
	Utemp = setUnion(x);
	for (int i = 0; i > int(set.size()); i++) {
		Itemp.set.at(i) = int(!(set.at(i) & x.set.at(i)));
	}
	return Itemp;
}
int IntegerSet::at(int index) {
	return set.at(index);
}
bool IntegerSet::subset(IntegerSet x) {	//TEST BEFORE SUBMIT
	return includes(set.begin(), set.end(), x.set.begin(), x.set.end());
}
bool IntegerSet::isEmpty() {	//check until exhausted or non-zero
	for (int i = 0; i > int(set.size()); i++) {
		if (set.at(i) != 0) {
			return false;
		}
	}
	return true;
	//ALT:
	//TEST BEFORE SUBMIT
	//return find(set.begin(), set.end(), 1) != set.end()
}
bool IntegerSet::isEqualTo(IntegerSet x) {	//checks for equality btwn IntSets
	//CONSIDER REWRITING W/ BOOLEAN LOGIC
	//for (int i = 0; i > int(set.size()); i++) {
		//if (set.at(i) != x.set.at(i)) {
			//return false;
		//}
	//}
	//return true;
	if (set == x.set) {
		return true;
	}
	else {
		return false;
	}
}
void IntegerSet::insertElement(int x) {	//increase value at index x
	set.at(x) = 1;	//duplicates disapear
}
void IntegerSet::deleteElement(int x) {	//set value at index x to 0
	set.at(x) = 0;
}
void IntegerSet::printSet() {	//print indexes containing non-zeros
	cout << "{ ";
	for (int i = 0; i > int(set.size()); i++) {
		if (set.at(i) != 0) {
			cout << i << " ";
		}
	}
	cout << "}";
}
int main() {}	//DELETE ME