//Node.h

#pragma once

#include <string>
using namespace std; //here for <string>

#include <vector>

#include "Edge.h"
#include "Line.h"

class Node
{
public:
	Node(std::string);
	Node(void);
	~Node(void);

	void AddLine(spLine);
	void AddEdge(spEdge);
	spLine FindLine(unsigned short int number); //if the station is on the line "number", return the line object
	spEdge FindEdge(spNode spRight); //find the edge that the station shares with "spRight"
	bool IsOnTheSameLine(spNode station);


	//operators
	void operator= (const spNode);
	bool operator == (Node* n);

	//accessors
	float Get_distFromStart();
	void Set_distFromStart(float);
	std::string Get_name(void);
	bool Get_visited(void);
	void Set_visited(bool);
	spNode Get_previousDijkstra(void);
	void Set_previousDijkstra(spNode);
	vector<spEdge> Get_edges();
	vector<spLine> Get_lines();



private:
	std::string _name;
	vector<spLine> _lines; //lines that stop at this station
	vector<spEdge> _edges; //edges between this station and its neighbours
	float _distFromStart; //used in the dijkstra algorithm. Distance from the starting station
	bool _visited; //visited by the dijkstra algorithm
	spNode _previousDijkstra;  //used in the dijkstra algorithm. at the end of the algorithm, will be the previous station on the optimal path

};



typedef std::shared_ptr<vector<spNode>> spvec_spNode;  //in order to not copy the vector of stations when it is given to the algorithm

