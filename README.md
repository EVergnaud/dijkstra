Dijkstra algorithm: ENSAE project by Etienne Vergnaud and Jean Santini (February 2013)  
etienne.vergnaud@ensae.fr  
etienne.vergnaud@gmail.com  

Aim of the project:  
- implement the Dijkstra Algorithm to solve a shortest path problem
- use the algorithm to find efficient routes between two stations in the Parisian underground

Synthesis available in French in the same repo.

Run this project:  
Open Metro.sln in Microsoft Visual C++ (written with the 2010 version)

List of code files:  
Algorithme (.cpp/.h): used to illustrate the concept of abstract base classes (with pure virtual functions)  
Dijkstra: Implementation of the Dijkstra algorithm  
Edge: the underground is represented as a graph. The edge object represents a link between two stations  
GraphBuilder: Build the graph using the text files  
InsertEnd: Insert an object U at the end of an object T (to illustrate templates)  
Line: Class representing the lines of the underground  
MainWindow: WindowsForm to have a GUI  
Metro.cpp: main project file, used to build the graph and launch the GUI   
Node: Class representing stations  
Split: split function  



List of text/csv files:  
lines.txt: list of the lines used  
stations.csv: list of the stations (key;name;lines;edges  when a station is on multiple lines, a "," separates them and when an edge is represented as "neighbour*line". "," separates two edges)
