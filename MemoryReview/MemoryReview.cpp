#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void doubleANumber(int* p) {
	*p = *p * 2;
}

//void square(int i) {
void square(int& i) {
	i = i * i;
}

int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	int someNumber = 9;
	// declare a int reference and set it to the int variable above
	int& someNumbersHouseAddress = someNumber;

	// output the int variable
	cout << someNumber << endl;

	// set the int reference to some number
	someNumbersHouseAddress = 8;
	// output the int variable
	cout << someNumber << endl;
	// what happened to the int variable when the reference was changed? (The int variable was changed by changing the reference.)

	// output the address of the int variable
	cout << &someNumber << endl;
	// output the address of the int reference
	cout << &someNumbersHouseAddress << endl;
	// are the addresses the same or different? (They have the same address.)

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	
	//square(someNumber);

	// output the int variable to the console
	cout << someNumber << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* someNumbersNeighbor = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	someNumbersNeighbor = &someNumber;

	// output the value of the pointer
	cout << someNumbersNeighbor << endl;
	// what is this address that the pointer is pointing to? (The address of the int created in the Reference section.)
	// output the value of the object the pointer is pointing to (dereference the pointer)
	cout << *someNumbersNeighbor << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	doubleANumber(someNumbersNeighbor);

	// output the dereference pointer
	cout << *someNumbersNeighbor << endl;
	// output the int variable created in the REFERENCE section
	cout << someNumber << endl;
	// did the int variable's value change when using the pointer?
	//(Yes)

	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	int* indexFinger = new int;
	*indexFinger = 10;
	// output the pointer value, this should be the address of the int allocated on the heap
	cout << indexFinger << endl;
	// output the dereference pointer
	cout << *indexFinger << endl;
	// deallocate the int pointer to free up the memory
	delete indexFinger;

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	int* indexFinger2 = new int[5];
	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	for (int i = 0; i <= sizeof(*indexFinger2); i++) {
		indexFinger2[i] = rand() % 10;
	}
	// use a for loop and output each of the ints in the array
	for (int i = 0; i <= sizeof(*indexFinger2); i++) {
		cout << indexFinger2[i] << endl;
	}
	// use a for loop and output the address of each of the ints in the array
	for (int i = 0; i <= sizeof(*indexFinger2); i++) {
		cout << &indexFinger2[i] << endl;
	}
	// deallocate the int pointer to free up the memory block (remember it's an array)
	delete [] indexFinger2;

	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	Person* persons = new Person[2];
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	cin >> persons[0].name;
	cin >> persons[1].name;
	cin >> persons[0].id;
	cin >> persons[1].id;
	// use a for loop and output the name and id of each person in the array 
	for (int i = 0; i < sizeof(*persons); i++) {
		cout << persons[i].name << endl;
		cout << persons[i].id << endl;
	}
	// deallocate the person pointer to free up the memory block (remember it's an array)
	delete [] persons;

	//not sure why, but the programs works fine. It just prints a bunch of garbage after the code.
}