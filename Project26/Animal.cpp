#include "Animal.h"

Animal::Animal(std::string name) :Entity(name){}

void Animal::Eat()
{
	setEnergy(getEnergy() + 1);
}

void Animal::Sleep()
{
	setEnergy(getEnergy() + 1);
}

void Animal::SearchingForFood()
{
	setEnergy(getEnergy() - 1);
}

void Animal::DoAction(State action)
{
	switch (action)
	{
	case Moving:
		setCurrentState(Moving); break;
	case Attacking:
		setCurrentState(Attacking); break;
	case Eating:
		setCurrentState(Eating); break;
	case SearchFood:
		setCurrentState(SearchFood); break;
	case Sleeping:
		setCurrentState(Sleeping); break;
	case Unknown:
		setCurrentState(Unknown); break;
	}
}

