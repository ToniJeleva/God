#ifndef ANIMAL_H
#define ANIMAL_H
#include "Entity.h"
class Animal :public Entity
{
public:
	Animal(){};
	Animal(std::string name);
	void Eat();
	void Sleep();
	void SearchingForFood();
	void DoAction(State action);
};
#endif