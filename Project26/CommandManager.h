#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H
#include "Entity.h"
#include <string>
class CommandManager
{
private:
	std::string nameofPlanet;
	int number;
	EntityType type;
public:
	int getNumber()const{ return number ; };
	std::string getName()const{ return nameofPlanet; };
	EntityType getType()const{ return type; };
	void readCommand();
};
#endif