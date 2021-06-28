#pragma once
#include "Animal.h"
#include <vector>
#include <list>
#include <memory>


class Database
{
public:
	~Database();

	void Add(Animal::eType type);
	void DisplayAll();
	void Display(std::string name);
	void Display(Animal::eType type);
	std::unique_ptr<Animal> Create(Animal::eType type);
	void Load(const std::string& filename);
	void Save(const std::string& filename);
	void RemoveAll();

	void Remove(const std::string& name);
	void Remove(Animal::eType type);

public:
	std::list<std::unique_ptr<Animal>> m_animals;
};

