#include "RandomGenerator.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
Point2D RandomGenerator::getRanodmCordinates()
{
	Point2D position;
	srand(time(NULL));                  // scrand() gives the random fucntion a new starting point time(NULL)garanties getting a new starting point every time
	double x1 = rand() % 100 + 0;       //generates random numbers from 0 to 100
	double y1 = rand() % 100 + 0;
	position = Point2D(x1, y1);
	return position;
}

std::string RandomGenerator::getRandomName()
{
	std::string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	std::string r;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		r.push_back(a.at(size_t(rand() % 62)));
	std::cout << r << std::endl;
	return r;
}

void RandomGenerator::getRandomDamage(Entity& entity)
{
	srand(time(NULL));                   
	int code = rand() % 3 + 1;            
	switch (code)
	{
	case 1:
		entity.setEnergy(entity.getEnergy() - 1);
		break;
	case 2:
		entity.setStrenght(entity.getStrenght() - 1);
		break;
	case 3:
		entity.setEnergy(entity.getEnergy() - 0.5);
		entity.setStrenght(entity.getEnergy() - 0.5);
		break;
	}
}