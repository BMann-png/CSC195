#include "Mammal.h"
#include <iostream>
#include <fstream>

void Mammal::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);

	ostream << "enter number of babies: ";
	istream >> m_numBabies;
}

void Mammal::Write(std::ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "number of babies: " << m_numBabies << std::endl;
}

void Mammal::Read(std::ifstream& istream)
{
	Animal::Read(istream);

	istream >> m_numBabies;
}
void Mammal::Write(std::ofstream& ostream)
{
	Animal::Write(ostream);

	ostream << m_numBabies << std::endl;
}