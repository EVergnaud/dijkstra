//Edge.h
#pragma once

#include <memory>  //using namespace std ++ & include <memory> mandatory for shared pointer
#include "Line.h"
class Node; //forward declaration, because including "Node.h" provokes errors


using namespace std;
typedef std::shared_ptr<Node> spNode;  //redefine the name of a shared pointer on a Node object 


class Edge
{
public:
	Edge(spNode, spNode, spLine, float,bool=false, bool=false);
	Edge(void);
	~Edge(void);
	spNode GetLeftNode(void);
	spNode GetRightNode(void);
	float GetWeight(void);
	unsigned short int GetLineNumber(void);
private:
	spNode _leftNode;
	spNode _rightNode;
	float _weight; //must be positive
	spLine _line;
};

typedef std::shared_ptr<Edge> spEdge;  //smart pointer on an Edge object
