#include "Planet.h"
#include "Animal.h"
#include "Human.h"
#include "God.h"
#include <iostream>
Planet::Planet(std::string name){ this->name = name;  }

void Planet::erasePopulation(){ population.clear(); }
Planet::~Planet()
{
	while (!population.empty())
	{
		delete population.back();   //"delete" erases the memory allocated for the object of the vector
		population.pop_back();
	}
}
void Planet::addPopulation(EntityType type, int number)
{
	for (int i = 0; i < number; i++)
	{
		switch (type)
		{
		case entity:
			population.push_back(new Entity()); break;   //push_back adds element to the end of the vector
		case animal:
			population.push_back(new Animal()); break;
		case human:
			population.push_back(new Human()); break;
		case god:
			population.push_back(new God()); break;
		}
		
	}
}

void Planet::movePopulation()
{
	for (unsigned int j = 0; j < population.size(); j++)
	{
		population[j]->Move();
	}
}

void Planet::findPosition()
{
	Point2D a;
	for ( int j = 0; j <getPopulation(); j++)
	{
		for (int k = j + 1; k < getPopulation(); k++)
		{
			if (a.getDistance(population[j]->getPosition(), population[k]->getPosition()) < 5)
			{
				int random = rand() % 2 + 1;
				switch (random)
				{
				case 1:
					population[j]->Attack(*population[j]);
					break;
				case 2:
					addPopulation(entity, 1);

				}
			}
			else if (a.getDistance(population[j]->getPosition(), population[k]->getPosition()) == 0)
			{
				movePopulation();
			}
		}
	}
}