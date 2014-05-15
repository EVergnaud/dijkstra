//Builder.h
#pragma once
//#include <string>



#include <iostream>  //cerr
using namespace std; //read/write a flux  + <string>
#include <fstream> //read/write a flux
#include "InsertEnd.h"
#include "Split.h"


#include "Node.h" //includes also Line.h and Edge.h


vector<spLine> BuildLines(std::string);  //build the Line objects from a .txt

spvec_spNode BuildStations(std::string,  vector<spLine>&); //build the Station objects

vector<spEdge> BuildEdges(std::string path, spvec_spNode); //build the Edge objects

