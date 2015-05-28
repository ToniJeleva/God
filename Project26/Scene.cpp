#include "Scene.h"
#include <iostream>
#include "RandomGenerator.h"
Scene::Scene(){}
void Scene::createPlanets()
{
	RandomGenerator object;
	std::string name = object.getRandomName();
	planet.push_back(new Planet(name));
}

void Scene::erasePopulation()
{
	check();
	for (unsigned int i = 0; i < planet.size(); i++)
	{
		if (planet[i]->getName() == planetName.data())
		{
			planet[i]->erasePopulation();
			std::cout << "You have just erased the population of a planet!\n";
			std::cout << "\n";
		}
		else
			std::cout << "There is not such a planet.\n";
	}
}

void Scene::destroyPlanet()
{
	check();
	for (unsigned int i = 0; i < planet.size(); i++)
	{
		if (planet[i]->getName() == planetName.data())
		{
			planet.erase(planet.cbegin() + i);
			std::cout << "You have just destroyed a planet!\n";
			std::cout << "\n";
		}
		else
			std::cout << "There is not such a planet.\n";
	}

}

void Scene::addEntity()
{
	
	for (unsigned int i = 0; i < planet.size(); i++)
	{

		if (planet[i]->getName() == planetName)
		{
				planet[i]->addPopulation(type, number);

		}
	}
	
}

void Scene::getStatistics()
{
	for (unsigned int i = 0; i < planet.size(); i++)
	{
		std::cout << planet[i]->getName() << std::endl;
		std::cout << planet[i]->getPopulation() << std::endl;
	}
	if (planet.size() == 0)
	{
		std::cout << "You have no planets :("<<std::endl;
	}
}

bool Scene::check()
{
	if (planet.size() == 0)
	{
		std::cout << "It is empty.You haven't created any planets yet.\nPlease enter 1 to create a new planet.\n" << std::endl;
		return 1;
	}
	return 0;
}

Scene::~Scene()
{
	while (!planet.empty())
	{
		delete planet.back();
		planet.pop_back();
	}
}

void Scene::sceneUpdate()
{
	for (unsigned int i = 0; planet.size(); i++)
	{
		planet[i]->movePopulation();
		planet[i]->findPosition();
	}
	
}