#include "Human.h"

Human::Human(std::string name) :Animal(name){}

void Human::Analyse()
{
	if (getEnergy() < 1)
	{
		Eat();
		Sleep();
	}
}

void Human::DoAction(State action)
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
	case Analyzing:
		setCurrentState(Analyzing); break;
	case Unknown:
		setCurrentState(Unknown); break;
	}
}