#include <iostream>

using namespace std;

int main()
{
    string name;
    unsigned short age = 0;
    bool isAdult = 0;
    unsigned int zipcode = 0;
    float wage = 0.0f;
    unsigned short daysWorked = 0;
    unsigned short hoursWorkedPerDay[7] = {0, 0, 0, 0, 0, 0, 0};
    const float tax = 0.3f;

    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        isAdult = true;
    }
    else {
        isAdult = false;
    }

    cout << "Enter your zipcode: ";
    cin >> zipcode;

    cout << "Enter your hourly wage: $";
    cin >> wage;

    cout << "Enter the number of days you've worked this week: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter the number of hours you worked on day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
    }


    unsigned short hoursWorked = 0;

    for (int i = 0; i < daysWorked; i++) {
        hoursWorked += hoursWorkedPerDay[i];
    }
    float moneyMade = hoursWorked * wage;

    cout << name << " worked " << hoursWorked << " hours, at a rate of $" << wage << " per hour.\nGross income: $" << moneyMade << "\nNet income: $" << moneyMade - (moneyMade * tax) << endl;
  
    
}
