#include "Database.h"
#include "Bird.h"
#include "Mammal.h"
#include <iostream>
#include <fstream>



std::vector<Animal*> m_animals;


Database::~Database()
{
	RemoveAll();
}

void RemoveAll()
{
	for (Animal* animal : m_animals)
	{
		delete animal;
	}
	m_animals.clear();
}

void Database::Add(Animal::eType type)
{
	Animal* animal = Create(type);


	std::cout << *animal;
	m_animals.push_back(animal);
}

Animal* Create(Animal::eType type)
{

	Animal* animal = nullptr;

	switch (type)
	{
	case Animal::eType::bird:
		animal = new Bird;
		break;
	case Animal::eType::Mammal:
		animal = new Mammal;
		break;
	default:
		break;
	}

	return animal;
}

void Database::DisplayAll()
{
	for (Animal* animal : m_animals)
	{
		std::cout << *animal;
	}
}

void Database::Display(std::string name)
{
	for (Animal* animal : m_animals)
	{
		if (name == animal->Getname())
		{
			std::cin >> *animal;
		}

	}
}

void Database::Display(Animal::eType type)
{
	for (Animal* animal : m_animals)
	{
		if (type == animal->GetType())
		{
			std::cin >> *animal;
		}
	}
}
