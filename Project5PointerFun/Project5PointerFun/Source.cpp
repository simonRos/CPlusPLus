//Simon Rosner
//2/27/2016
//This program was written to exhibit my ability to manipulate pointers in c++

#define SIZE 5

#include<iostream>

using namespace std;

int main() {
	unsigned values[5] = { 2,4,6,8,10 };//a, unsigned array of evens 2-10
	unsigned *vPtr = &values[0];//b, pointer that points to an unsigned int
	cout << "c, print the values of variable values." << endl;//c, print values[]
	for (int i = 0; i < SIZE; i++) {
		cout << values[i] << endl;
	}
	//d, write two statements assigning address of values[0] to vPtr
	//one statement has already been written above for part b
	vPtr = &values[0];//vPtr can also be instantiated and then reasigned
	cout << "e, print elements of value using pointer offset notation." << endl;
	for (int j = 0; j < SIZE; j++) {//e, print array using pointer offset notation
		cout << *(vPtr + j) << endl;
	}
	cout << "f, print elements of value using pointer notation and array name." << endl;
	for (int k = 0; k < SIZE; k++) {//f, print array using array name
		cout << *(values + k) << endl;
	}
	cout << "g, print elements of value using pointer subscripting." << endl;
	for (int l = 0; l < SIZE; l++) {//f, print array using pointer subscript notation
		cout << vPtr[l] << endl;
	}
	cout << "h, refer to 5th element of array using all of the above methods" << endl;
	cout << "array subscript notation: "<< values[4] << endl;//g, see output text
	cout << "pointer offset notation with array as subscript: " << *(values + 4) << endl;//g, see output text
	cout << "pointer subscript notation: " << vPtr[4]<< endl;//g, see output text
	cout << "pointer offset notation: " << *(vPtr + 4) << endl;//g, see output text
	cout << "The address referenced by vPtr + 3: " << (vPtr + 3) << endl;//i, see output text
	cout << "The value stored at that location: " << *(vPtr + 3) << endl;//i, see output text
	vPtr = &values[4]; //j, "Assuming that vPtr points to values[ 4 ]"
	cout << "Assuming that vPtr points to values[4]" << endl;
	cout << "The address referenced by vPtr -= 4: " << (vPtr -= 4) << endl;//j, see output text
	vPtr = &values[4]; //reset
	cout << "The valued stored at vPtr -= 4: " << *(vPtr -= 4) << endl;//j, see output text

	//system("PAUSE");	//for debug DELETE ME
}