#ifndef HUMAN_H
#define HUMAN_H
#include "Animal.h"
class Human :public Animal
{
public:
	Human(){};
	Human(std::string name);
	void Analyse();
	void DoAction(State action);
};
#endif