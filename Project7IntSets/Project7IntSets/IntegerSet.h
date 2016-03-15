//Simon Rosner
//3/14/2016
//This is the header class for IntegerSet.cpp
#ifndef INTSET_H
#define INTSET_H

using namespace std;

class IntegerSet {
//named constants
private:
	//vars

	//functions

public:
	//vars
	vector <int> set;	//Storage for set.
	//constructor(s)
	IntegerSet();	//default
	//functions
	IntegerSet intersection(IntegerSet);
	IntegerSet setUnion(IntegerSet);
	IntegerSet complement(IntegerSet);
	IntegerSet difference(IntegerSet);
	bool subset(IntegerSet);
	bool isEmpty();
	bool isEqualTo(IntegerSet);
	void insertElement(int);
	void deleteElement(int);
	void printSet();
};
#endif