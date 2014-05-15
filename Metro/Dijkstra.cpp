//Dijkstra.cpp
#include "Dijkstra.h"
using namespace std;


Dijkstra::Dijkstra(spvec_spNode stations, spNode start, spNode end, float connectionDelay):Algorithme(start, end, connectionDelay)
{
	_stations=stations;
}
Dijkstra::Dijkstra(void)
{
}

Dijkstra::~Dijkstra(void)
{
}


vector<spNode> Dijkstra::GiveOptimalPath()
{
	_Run();
	
	vector<spNode> optimalPath;  //we don't instanciate a spvec_spNode because optimalPath because it won't be passed to many functions ?
	optimalPath.insert(optimalPath.begin(), _end);

	spNode iterator;
	iterator=_end;
	int k=0;
	while(iterator!=_start)  //we go back from the destination station to the starting station thanks to _previousDijkstra
	{
		optimalPath.insert(optimalPath.begin(), iterator->Get_previousDijkstra());
		iterator=iterator->Get_previousDijkstra();
	}

	stationsReinitialization(); //enables us to run Dijkstra again without interference from a previous run
	return optimalPath;
}

void Dijkstra::_Run()
{
	spNode current; //node on which we will work on
	current=_start; //we initialize at the start station
	current->Set_distFromStart(0);

	while(_end->Get_visited()==false) // the algorithm ends when the destination as been visited (each neighbour is either visited or has been given a tentative distance) //explain more
	{
		vector<spNode> neighbours;
		neighbours=_Neighbours(current);
		for(unsigned int i=0;i<neighbours.size();i++) //browse the neighbour stations to update
			//their tentative distances (i.e their distances to the starting point according to the edges the algorithm has already seen
		{
				_UpdateTentativeDistance(current,neighbours[i]);
		}

		current->Set_visited(true);   //the current station will never be checked again (that's why the algorithm ends when the destination is visited)
		current=_NodeMinTentativeDistance(); //iteration
	}
}


void Dijkstra::_UpdateTentativeDistance(spNode current, spNode neighbour)
{
	float connectionDelay=0;
	if(current->Get_previousDijkstra()!=NULL)
	{
		connectionDelay= (current->Get_previousDijkstra()->IsOnTheSameLine(neighbour)==true) ? 0 : _connectionDelay;
	}
	float tempDist;
	tempDist=current->Get_distFromStart() + current->FindEdge(neighbour)->GetWeight() + connectionDelay; 
	float d=neighbour->Get_distFromStart();
	if (tempDist < d || d==-1) // the tentative distance is updated if the neighbour station has not yet been given a tentative distance
		//or if its previous distance (d) is larger than the one it could get coming from the current station (tempDist) 
	{
		neighbour->Set_distFromStart(tempDist);
		neighbour->Set_previousDijkstra(current); //as tempdist<d, if it happens to be on the optimal path, current will be the previous station of neighbour
		if(neighbour->Get_visited()==true)
		{
			neighbour->Set_visited(false);
		}
	}
}

spNode Dijkstra::_NodeMinTentativeDistance() //return the station with the minimal distance (among the ones the algorithm knows of) from the start
{
	float tempMinDist;
	tempMinDist=-1;   //temporary minimal distance
	spNode tempNode;  
	tempNode=_start;   //temporary minimal station
	for(unsigned int i=0;i<_stations->size();i++)  //browse all the stations...
	{
		if ( (*_stations)[i]->Get_distFromStart()!=-1  && (*_stations)[i]->Get_visited()==false) //among the ones that have not been visited
			//or have been attributed a tentative distance
		{
			if(   (*_stations)[i]->Get_distFromStart()<tempMinDist  || tempMinDist==-1) //the stations becomes the temporary minimal station
				//if its tentative distance is smaller than the previous minimal station's one or if its the first station of the loop
			{
				tempMinDist=(*_stations)[i]->Get_distFromStart();
				tempNode=(*_stations)[i];
			}
		}

	}
	return tempNode;
}

vector<spNode> Dijkstra::_Neighbours(spNode station) 
{
	vector<spNode> neighbours;
	for(unsigned int i=0;i<station->Get_edges().size();i++) //browse all the edges associated with the station
	{
		spEdge edge;
		edge=station->Get_edges()[i];
		if(edge->GetRightNode()!=station) //if the right station of the edge is not the current station
		{
			neighbours.insert(neighbours.begin(), edge->GetRightNode());
		}
		else if(edge->GetLeftNode()!=station) //or the left is not the current station
		{
			neighbours.insert(neighbours.begin(), edge->GetLeftNode());
		}
		//add the right (or the left) to the neighbours vector
	}
	return neighbours;  //return a vector of size 0 if all neighbours have a tentative distance strictly superior to the tentative distance of "station"

}




void Dijkstra::stationsReinitialization()
{
	for(unsigned int i=0; i<_stations->size(); i++)  //initialization useful when we want to run Dijkstra twice
	{
		(*_stations)[i]->Set_distFromStart(-1);
		(*_stations)[i]->Set_visited(false);
		(*_stations)[i]->Set_previousDijkstra(NULL);
	}
}