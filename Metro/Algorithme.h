#pragma once
#include "Node.h"
class Algorithme
{
public:
	Algorithme::Algorithme(spNode start, spNode end, float connectionDelay);
	Algorithme(void);
	virtual ~Algorithme(void);  //virtual destructor as soon as we use polymorphism ?
	virtual vector<spNode> GiveOptimalPath()=0;//pure virtual function : must be defined in each inherited class; 
												//if not the latter becomes abstract and cannot be instantiated
protected:
	float _connectionDelay; //to be used by Dijkstra::_UpdateTentativeDistance
	spNode _start;
	spNode _end;
};

