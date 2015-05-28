#include "Entity.h"
#include "RandomGenerator.h"
Entity::Entity()
{
	name="Unknown";
	energy=0;
	size=0;
    weight=0;
	strenght=0;
}
Entity::Entity(std::string name1)
{
	this->name = name1;
}

void Entity::Attack(Entity& entity)
{
	RandomGenerator object;
	if (this->strenght>entity.getStrenght())
		object.getRandomDamage(entity);
}
void Entity::Move()
{
	RandomGenerator object;
	this->position = object.getRanodmCordinates();
}

void Entity::DoAction(State action)
{
	switch (action)
	{
	case Moving:
		Move();
		setCurrentState(Moving); break;
	case Attacking:
		//Attack(entity);
		setCurrentState(Attacking); break;
	case Unknown:
		setCurrentState(Unknown); break;
	}
}
