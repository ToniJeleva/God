#ifndef GOD_H
#define GOD_H
#include "Human.h"
#include "Scene.h"
class God :public Human
{
private:
	Scene* sc = new Scene;
public:
	God();
	God(std::string name);
	God(God& s){*this = s;}
	God& operator=(God& s);
	void CreatePlanets();
	void ErasePopulation(std::string planetName);
	void DestroyPlanet(std::string planetName);
	void AddEntity(std::string planetName, EntityType type, int number);
	void GetStatistics();
	bool Check();
	~God();
};
#endif