#include "Simulator.h"
#include <iostream>
#include <sstream>
void Simulator::Run()
{ 
	Menu();
	std::thread(&Simulator::Menu, Simulator());
}
void Simulator::Update()
{
	sc->sceneUpdate();
}
void Simulator::Menu()
{
	int selection;
	std::string str = "";

	std::cout << "  Welcome! You are the new God! You should choose an action to execute :-)!\n";
	std::cout << "  ====================================\n";
	std::cout << "  1.  Creating new planet\n";
	std::cout << "  2.  Erase the population of a planet\n";
	std::cout << "  3.  Destroying planet\n";
	std::cout << "  4.  Get statistic about your planets\n";
	std::cout << "  5.  Add new entity to some planet\n";
	std::cout << "      Your command should look like this:\n ";
	std::cout << "      add <name of planet> <entity|animal|human|god> <number>, ";
	std::cout << "\n";
	std::cout << "  6.  Exit\n";
	std::cout << "  ====================================\n";

	do
	{
		std::cout << "Enter your command: ";
		std::cin >> selection;
		std::cout << std::endl;
		switch (selection)
		{
		case 1:
			
			std::cout << "Congratulations,you have created a new planet:\n";
			m_player->CreatePlanets();
			std::cout << "\n";
			break;

		case 2:
			if (m_player->Check() == 1)break;
			std::cout << "Enter the name of the planet, which population you want ot erase:\n";
			std::cin.ignore();           //extracts the last character of the input sequence, in this case the new line charcter
			std::getline(std::cin, str);
			m_player->ErasePopulation(str);
			break;
		case 3:
			if (m_player->Check() != 0)break;
			std::cout << "Enter the name of the planet, which population you want ot destroy:\n";
			std::cin.ignore();
			std::getline(std::cin, str);
			m_player->DestroyPlanet(str);
			break;
		case 4:
			m_player->GetStatistics();
			break;
		case 5:
			command->readCommand();
			m_player->AddEntity(command->getName(),command->getType(),command->getNumber());
			std::cout << "You have just added some entities!\n";
			std::cout << "\n";
			break;

		case 6:
			std::cout << "Goodbye.\n";
			break;

		default: std::cout << selection << "It is not a valid action.Please choose allowed action!\n";

			std::cout << std::endl;
		}
		
	} while (str != "6");

}

Simulator::~Simulator()
{
	delete m_player;
	delete sc;
	delete command;
}

Simulator& Simulator::operator=(Simulator& s)
{
	sc = s.sc;
	m_player = s.m_player;
	command = s.command;
	return *this;
}