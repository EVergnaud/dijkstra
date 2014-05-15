// Metro.cpp : main project file.

#include "MainWindow.h"

#include "Dijkstra.h"
#include "GraphBuilder.h"
using namespace Metro;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	//building lines
	vector<spLine> lines;
	lines=BuildLines("txt//lines.txt");  //should we do like the vector of stations, "spvec_spLine"?
	//building stations
	spvec_spNode stations(new vector<spNode>);
	stations=BuildStations("txt//stations.csv", lines);
	//building the edges
	vector<spEdge> Edges;
	Edges=BuildEdges("txt//stations.csv",stations);


	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	
	Application::Run(gcnew MainWindow(stations));
	return 0;
}
