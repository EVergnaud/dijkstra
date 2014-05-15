//Node.cpp
#pragma once

#include "Node.h"
Node::Node(std::string name)
{
	_name=name;
	_distFromStart=-1;
	_visited=false;
}
Node::Node(void)
{
}
Node::~Node(void)
{
}



void Node::operator = (spNode s)   //PUT ALSO VISITED ETC ?
{
	_name=s->_name;
	_lines=s->_lines;
	_edges=s->_edges;
}
bool Node::operator == (Node* n)   //Node* because we want to test (*spNode)==this cf FindEdge
{
	if(_name==n->Get_name())
	{
		return true;
	}
	else return false;
}




void Node::AddLine(spLine newLine)
{
	_lines.insert(_lines.begin() , newLine);
}

void Node::AddEdge(spEdge newEdge)
{
	_edges.insert(_edges.begin() , newEdge);
}
spLine Node::FindLine(unsigned short int number)   
{
	for(unsigned int i=0; i<_lines.size(); i++)
	{
		if(_lines[i]->Get_number()==number)
		{
			return _lines[i];
		}
	}
	return NULL;
}
spEdge Node::FindEdge(spNode right)//finding the object Edge that connects this station and the "right" station
{
	
	for(unsigned int i=0;i<_edges.size();i++)  //browse the edges
	{
		if(_edges[i]->GetRightNode()==right || (  (* _edges[i]->GetRightNode() )==this && _edges[i]->GetLeftNode()==right  )   ) //the operator == is manually defined
			//"if the station 'right' is the right station of the edge OR is the left station and the station 'left' is the right one of the edge"
			//(a directed edge is not in _edges if the station is not the left one) 
		{	
			return _edges[i];   //then return this edge
		}

	}
	return NULL;
}

bool Node::IsOnTheSameLine(spNode station)
{
	for(unsigned int i=0; i<_lines.size(); i++)
	{
		for(unsigned int j=0; j<station->Get_lines().size(); j++)
		{
			if(_lines[i]==station->Get_lines()[j])
			{
				return true;
			}
		}
	}
	return false;
}



std::string Node::Get_name(void)
{
	return _name;
}
float Node::Get_distFromStart()
{
	return _distFromStart;
}
void Node::Set_distFromStart(float distFromStart)
{
	_distFromStart=distFromStart;
}
bool Node::Get_visited(void)
{
	return _visited;
}
void Node::Set_visited(bool visited)
{
	_visited=visited;
}
spNode Node::Get_previousDijkstra(void)
{
	return _previousDijkstra;
}
void Node::Set_previousDijkstra(spNode previousDijkstra)
{
	_previousDijkstra=previousDijkstra;
}
vector<spEdge> Node::Get_edges(){
	return _edges;
}
vector<spLine> Node::Get_lines(){
	return _lines;
}







