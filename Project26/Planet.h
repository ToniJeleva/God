#ifndef PLANET_H
#define PLANET_H
#include <string>
#include <vector>
#include "Entity.h"
class Planet
{
private:
	std::string name;
	std::vector<Entity*>population;
public:
	Planet(std::string name);
	std::string getName()const{ return this->name; }
	int getPopulation()const{ return population.size(); }
	void erasePopulation();
	void movePopulation();
	void findPosition();
	void addPopulation(EntityType type, int number);
	~Planet();
};
#endif