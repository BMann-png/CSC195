#include "Database.h"
#include "Bird.h"
#include "Mammal.h"
#include <iostream>
#include <fstream>

Database::~Database()
{
	RemoveAll();
}

void Database::RemoveAll()
{
	m_animals.clear();
}

void Database::Load(const std::string& filename)
{
	std::ifstream input(filename);

	if (input.is_open())
	{
		RemoveAll();
		while (!input.eof())
		{
			int type;
			input >> type;

			std::unique_ptr<Animal> animal = Create(static_cast<Animal::eType>(type));
			animal->Read(input);
			m_animals.push_back(std::move(animal));
		}
	}
}

void Database::Save(const std::string& filename)
{
	std::ofstream output(filename);
	if (output.is_open())
	{
		for (auto& animal : m_animals)
		{
			int type = static_cast<int>(animal->GetType());
			output << type << std::endl;
			animal->Write(output);
		}
	}
}

void Database::Add(Animal::eType type)
{
	std::unique_ptr<Animal> animal = Create(type);


	std::cin >> *animal;
	m_animals.push_back(std::move(animal));
}

std::unique_ptr<Animal> Database::Create(Animal::eType type)
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

	return std::unique_ptr<Animal>{animal};
}

void Database::DisplayAll()
{
	for (auto& animal : m_animals)
	{
		std::cout << *animal;
	}
}

void Database::Display(std::string name)
{
	for (auto& animal : m_animals)
	{
		if (name == animal->Getname())
		{
			std::cout << *animal;
		}

	}
}

void Database::Display(Animal::eType type)
{
	for (auto& animal : m_animals)
	{
		if (type == animal->GetType())
		{
			std::cout << *animal;
		}
	}
}

void Database::Remove(const std::string& name)
{
	for (auto iter = m_animals.begin(); iter != m_animals.end();) 
	{ 
		iter = std::find(iter, m_animals.end(), name); 
		if (iter != m_animals.end()) 
		{ 
			iter = m_animals.erase(iter); 
		} 
	}
}
	
void Database::Remove(Animal::eType type)
{
	for (auto iter = m_animals.begin(); iter != m_animals.end();)
	{
		iter = std::find(iter, m_animals.end(), type);
		if (iter != m_animals.end())
		{
			iter = m_animals.erase(iter);
		}
	}
}
