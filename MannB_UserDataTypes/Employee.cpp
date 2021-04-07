#include "Employee.h"
#include <iostream>
using namespace std;

//const float Employee::TAX = 0.1f;
float grossIncome = 0.0f;
float netIncome = 0.0f;

void Employee::read() {
	cout << "Enter name: ";
	cin >> name;

	cout << "Enter age: ";
	cin >> age;

	cout << "Enter zipcode: ";
	cin >> zipcode;

	cout << "Enter wage: $";
	cin >> wage;

	cout << "Enter days worked: ";
	cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++) {
		cout << "enter hours worked for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];
	}
	for (int i = 0; i < daysWorked; i++) {
		
		totalHours += hoursWorkedPerDay[i];
	}

	grossIncome = totalHours * wage;
	netIncome = grossIncome - (grossIncome * TAX);
}

void Employee::write() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Zipcode: " << zipcode << endl;
	cout << "Wage: " << wage << endl;
	cout << "Days Worked: " << daysWorked << endl;
	cout << "Gross Inome: " << grossIncome << endl;
	cout << "Net Income: " << netIncome << endl;
}