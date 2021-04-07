#pragma once


class Employee
{
public:
	void read();
	void write();
private:
	char name[32];
	unsigned short age;
	unsigned int zipcode;
	float wage;
	unsigned short daysWorked;
	unsigned short hoursWorkedPerDay[7];
	const float TAX = 0.1f;

	unsigned short totalHours = 0;
};