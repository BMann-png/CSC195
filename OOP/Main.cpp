#include "Animal.h"
#include "Bird.h"
#include "Reptile.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.pop_back();

    std::vector<Animal*> animals;
    animals.push_back(new Bird);
    animals.push_back(new Bird(1, 1.0));
    animals.push_back(new Reptile);
}
