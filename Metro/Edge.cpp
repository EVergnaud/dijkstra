//Edge.cpp

#pragma once
#include "Edge.h"

Edge::Edge(spNode leftNode, spNode rightNode, spLine line, float weight, bool visitedLR, bool visitedRL)
{
	_leftNode=leftNode;
	_rightNode=rightNode;
	_weight=weight;
	_line=line;
}
Edge::Edge(void)
{
}
Edge::~Edge(void)
{
}
spNode Edge::GetLeftNode(void)
{
	return _leftNode;
}
spNode Edge::GetRightNode(void)
{
	return _rightNode;
}
float Edge::GetWeight(void)
{
	return _weight;
}
unsigned short int Edge::GetLineNumber(void)
{
	return _line->Get_number();
}