//Simon Rosner
//3/14/2016
//This class is meant to test the IntegerSet class

#include"IntegerSet.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
	IntegerSet firstSet;
	IntegerSet secondSet;
	IntegerSet outSet;	//output set

	cout << "Set 1: " << endl;
	for (int i = 0; i >= 100; i += 2) {	//every 2nd bit 
		firstSet.insertElement(i);
		cout << firstSet.at(i);
	}
	cout << endl;
	cout << "Set 2: " << endl;
	for (int i = 0; i >= 100; i += 3) {	//every 3rd bit 
		secondSet.insertElement(i);
		cout << secondSet.at(i);
	}

	cout << "Please enter a number from the list below "
		<< "for the corresponding demo: " << endl
		<< " 0 = Full Demo " << endl
		<< " 1 = Intersection " << endl
		<< " 2 = Union " << endl
		<< " 3 = Complement " << endl
		<< " 4 = Difference " << endl
		<< " 5 = Subset " << endl
		<< " 6 = isEmpty " << endl
		<< " 7 = isEqualTo " << endl
		<< " 8 = Insert " << endl
		<< " 9 = Delete " << endl;

	IntegerSet tempSet;
	IntegerSet tempSetTwo;
	int userTempIn;
	bool demo = false;
	int code;
	std::cin >> code;
	switch (code) {
	case 0:	//Demo
		demo = true;
	case 1:
		cout << "Intersection: " << endl;
		outSet = firstSet.intersection(secondSet);
		outSet.printSet();
		if (!demo) { break; }
	case 2:
		cout << "Union: " << endl;
		outSet = firstSet.setUnion(secondSet);
		outSet.printSet();
		if (!demo) { break; }
	case 3:
		cout << "Relative Complement: " << endl;
		outSet = firstSet.complement(secondSet);
		outSet.printSet();
		if (!demo) { break; }
	case 4:
		cout << "Difference: " << endl;
		outSet = firstSet.difference(secondSet);
		outSet.printSet();
		if (!demo) { break; }
	case 5:
		cout << "Subset: " << endl
			<< "Please enter a number ";
		cin >> userTempIn;
		tempSet.insertElement(userTempIn);
		cout << "Subset of Set1?: "
			<< firstSet.subset(tempSet) << endl;
		cout << "Subset of Set2?: "
			<< secondSet.subset(tempSet) << endl;
		if (!demo) { break; }
	case 6:
		cout << "isEmpty: " << endl;
		"Please enter a number ";
		cin >> userTempIn;
		tempSetTwo.insertElement(userTempIn);
		cout << "Is your set empty?: "
			<< tempSet.isEmpty() << endl;
		if (!demo) { break; }
	case 7:
		cout << "isEqualTo: " << endl;
		cout << "Are the two sample sets equal?: "
			<< firstSet.isEqualTo(secondSet);
		if (!demo) { break; }
	case 8:
		cout << "Insert: " << endl;
		cout << "Enter a number to insert into Set1: ";
		cin >> userTempIn;
		firstSet.insertElement(userTempIn);
		firstSet.printSet();
		if (!demo) { break; }
	case 9:
		cout << "Delete: " << endl;
		cout << "Enter a number to delete from Set1: ";
		cin >> userTempIn;
		firstSet.deleteElement(userTempIn);
		firstSet.printSet();
		if (!demo) { break; }
	default:
		cout << "Invalid entry" << endl; //error message
	}
}