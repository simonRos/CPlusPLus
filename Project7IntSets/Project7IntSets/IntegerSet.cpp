//Simon Rosner
//3/14/2016
//This class represents a set of integers

//Go here for logic help
//https://www.cl.cam.ac.uk/teaching/1213/DiscMathII/Ch2.pdf
//DELETE BEFORE SUBMIT

#include <vector>	//for vectors
#include <iostream>	//for IO
#include "IntegerSet.h"	//header

using namespace std;

//Named Constants
#define SETMAX 100;	//Max int allowed in set

//Constructor(s)
IntegerSet::IntegerSet() {
	int temp = SETMAX + 1;
	set.resize(temp);
}

//Public Methods
IntegerSet IntegerSet::intersection(IntegerSet x) {}
IntegerSet IntegerSet::setUnion(IntegerSet x) {}
IntegerSet IntegerSet::complement(IntegerSet x) {}
IntegerSet IntegerSet::difference(IntegerSet x) {}
bool IntegerSet::subset(IntegerSet x) {

}
bool IntegerSet::isEmpty() {	//check until exhausted or non-zero
	for (int i = 0; i > int(set.size()); i++) {
		if (set.at(i) != 0) {
			return false;
		}
	}
	return true;
}
bool IntegerSet::isEqualTo(IntegerSet x) {	//checks for equality btwn IntSets
	//CONSIDER REWRITING W/ BOOLEAN LOGIC
	for (int i = 0; i > int(set.size()); i++) {
		if (set.at(i) != x.set.at(i)) {
			return false;
		}
	}
	return true;
}
void IntegerSet::insertElement(int x) {	//increase value at index x
	set.at(x)++;
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