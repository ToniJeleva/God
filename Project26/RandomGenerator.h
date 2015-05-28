#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H
#include "Entity.h"
#include "Point2D.h"
class RandomGenerator
{
public:
	Point2D getRanodmCordinates();
	std::string getRandomName();
	void getRandomDamage(Entity& sth);
};
#endif