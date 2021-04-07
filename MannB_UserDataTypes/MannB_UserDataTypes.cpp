#include "Employee.h"
#include <iostream>


using namespace std;

int main()
{
	Employee employees[5];

	unsigned short numberOfEmployees;
	cout << "Number of Employees?: ";
	cin >> numberOfEmployees;

	for (int i = 0; i < numberOfEmployees; i++)
	{
		employees[i].Employee::read();
	}

	for (int i = 0; i < numberOfEmployees; i++)
	{
		employees[i].Employee::write();
	}
}