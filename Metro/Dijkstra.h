//Dijkstra.h
#pragma once
#include "Algorithme.h"
#include "Node.h"

using namespace std;
#include <memory>

class Dijkstra :
	public Algorithme
{
public:
	Dijkstra(spvec_spNode, spNode, spNode, float);
	Dijkstra(void);
	~Dijkstra(void);
	virtual vector<spNode> GiveOptimalPath(); //give the optimal path according to the dijkstra algorithm

private:
	spvec_spNode _stations;
	void _UpdateTentativeDistance(spNode, spNode); //do what its name says
	spNode _NodeMinTentativeDistance(); //return the station with the minimal distance (among the ones the algorithm knows of) from the start 
	spEdge _FindEdge(spNode,spNode); //finding the object Edge that connects the left and the right station
	void _Run();  //run the algorithm
	vector<spNode> _Neighbours(spNode);  //give the neighbours of a station
	void stationsReinitialization(); //enables us to run Dijkstra again without interference from a previous run
};



