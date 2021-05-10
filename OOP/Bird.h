#pragma once
#include "Animal.h"

class Bird : public Animal
{
public:
	Bird() {}
	Bird(int lifespan, float flightspeed) : Animal(lifespan)
	{
		m_flightSpeed = flightspeed;
	}

	void Speak() override;
protected:
	float m_flightSpeed = 0.0f;
};