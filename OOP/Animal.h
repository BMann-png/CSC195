#pragma once
#include <iostream>

class Animal
{
public:
	Animal(){}
	Animal (int lifespan) { m_lifespan = lifespan; }

	virtual void Speak() = 0;

	int GetLifespan() { return m_lifespan; }

	void SetLifespan(int lifespan) { m_lifespan = lifespan; }

protected:
	//the 'm' prefix is representative of the "member" definiton
	int m_lifespan;
};