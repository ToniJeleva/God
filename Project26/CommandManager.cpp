#include "CommandManager.h"
#include <vector>
#include <iostream>
#include <sstream>
void CommandManager::readCommand()
{
	std::string str = "";
	std::cin.ignore();
	std::getline(std::cin, str);
	std::stringstream ss(str);
	std::string token;
	std::vector<std::string> command;
	while (ss >> token)
	{
		command.push_back(token);
	}
	if (command[0] == "add")
	{
		nameofPlanet = command[1];
		number = std::stoi(command[3]);
		if (command[2] == "entity")
		{
			type = entity;
		}
		else if (command[2] == "animal")
		{
			type = animal;
		}
		else if (command[2] == "human")
		{
			type = human;
		}
		else
		{
			type = god;
		}
	}
	
}