#ifndef ENTITY_H
#define ENTITY_H
#include "Point2D.h"
#include "Enum.h"
#include <string>


class Entity
{
private:
	std::string name;
	double energy;
	double size;
	double weight;
	double strenght;
	Point2D position;
	State currentState;
public:
	Entity();
	Entity(std::string name1);
	std::string getName(){ return name; }
	void setName(std::string name1){ this->name = name1; }
	double getEnergy()const { return energy; }
	void setEnergy(double energy1){ this->energy = energy1; }
	double getSize()const{ return size; }
	void setSize(double size1){ this->size = size1; }
	double getWeight()const{ return weight; }
	void setWeight(double weight1){ this->weight = weight1; }
	Point2D getPosition()const{ return position; }
	void setPosition(double x, double y){ position = Point2D(x, y); }
	double getStrenght()const{ return strenght; }
	void setStrenght(double strenght1){ this->strenght = strenght1; }
	State getCurrentState()const{ return currentState; }
	void setCurrentState(State currentState){ this->currentState = currentState; }
	void Attack(Entity& entity);
	void Move();
	virtual void DoAction(State action);
};
#endif