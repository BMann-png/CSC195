#pragma once
#include <string>

class Animal
{
public:
	enum class eType
	{
		bird = 1,
		Mammal = 2
	};

public:
	std::string Getname() { return m_name; }
	virtual eType GetType() = 0;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);
	virtual void Read(std::ifstream& istream);
	virtual void Write(std::ofstream& ostream);

	friend std::istream& operator >> (std::istream& istream, Animal& animal);
	friend std::ostream& operator << (std::ostream& ostream, Animal& animal);


protected:
	std::string m_name;
	int m_lifespan = 0;
};

