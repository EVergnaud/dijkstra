//GraphBuilder.cpp
#pragma once

#include "GraphBuilder.h"


vector<spLine> BuildLines(std::string path)
{
	vector<spLine> lines;
	ifstream file(path, ios::in);  //flux declared and file read
	string ligne;
    if(file)  // if opening has succeeded
    {	
		while(getline(file, ligne))  // as long as there are lines remaining in the file
		{
			spLine spline(new Line(stoi(ligne)));  //stoi = string to int
			InsertEnd(lines,spline); //insert at the end of the vector the ieth line. lines[0] is the line 1!
		}
		file.close();  // file closed
    }
    else  // if it has not succeeded
	{
            cerr << "Erreur à l'ouverture !" << endl;
	}
	return lines;
}





spvec_spNode BuildStations(std::string path, vector<spLine> & lines)
{
	spvec_spNode stations(new vector<spNode>(79)); //79 underground stations
	ifstream file(path, ios::in);
	string entry;

	if(file) // if opening has succeeded
    {	
		getline(file, entry); //to skip the colum titles
		while(getline(file, entry))  // as long as there are lines remaining in the file
		{
			vector<std::string> splittedEntry=Split(entry,';');

			if(splittedEntry.size()>0 && splittedEntry[1].size()>0) //if there is a name
			{
				int key=stoi(splittedEntry[0]); //the first column of the line corresponds to the key of the station i.e its rank in the vector
				spNode spstation(new Node(splittedEntry[1])); //creating the station (the second column corresponds to the name of the station)
				(*stations)[key]=spstation;  //inserting it in the vector

				if(splittedEntry[2].size()>0)  //the third column corresponds to the lines of which the station is
				{
					vector<std::string> splittedLines=Split(splittedEntry[2],','); //getting all the lines
					for(unsigned int i=0; i<splittedLines.size(); i++)
					{
						std::string l=splittedLines[i];  //number of line but is still a string : it will have to be converted to int 
						if(l.size()>0)
						{
							(*stations)[key]->AddLine(lines[stoi(l)-1]);  //for each line, adding it to the lines of the station
																		  //the line i corresponds to lines[i-1]
						}
						
					}
				}
			}
		}
		file.close();  //file closed
    }
    else  //if it has not succeeded
	{
            cerr << "Erreur à l'ouverture !" << endl;
	}
	return stations;

}


vector<spEdge> BuildEdges(std::string path, spvec_spNode stations)
{
	vector<spEdge> Edges;

	ifstream file(path, ios::in);
	string entry;

	if(file)  // if opening has succeeded
    {	
		getline(file, entry); //to skip the colum titles
		while(getline(file, entry))  // // as long as there are lines remaining in the file
		{
			vector<std::string> splittedEntry=Split(entry,';');

			if(splittedEntry.size()>0 && splittedEntry[1].size()>0) //if there is a name
			{
				int key=stoi(splittedEntry[0]);

				if(splittedEntry[3].size()>0)   //the fourth column corresponds to the neighbours of the station
												// !! there is only one neighbour by line in this column : as each station
												//returns to the next station, the whole chain can be found back
				{
					vector<std::string> splittedEdges=Split(splittedEntry[3],','); //getting all the neighbours
					for(unsigned int i=0; i<splittedEdges.size(); i++)
					{
						std::string l=splittedEdges[i];
						if(l.size()>0)
						{
							vector<std::string> splittedL=Split(l,'*'); //getting the key of the neighbour and the line of the edge

							spLine line = (*stations)[stoi(splittedL[0])] -> FindLine(stoi(splittedL[1]));
							if (line!=NULL)
							{
								spEdge spedge(new Edge((*stations)[key], (*stations)[stoi(l)], line , 1));
								(*stations)[key]->AddEdge(spedge);
								(*stations)[stoi(l)]->AddEdge(spedge);    //should be modified when the edge is directed 
							}
						}
						
					}
				}


			}
		}
		file.close(); //file closed
    }
    else  //if it has not succeeded
	{
            cerr << "Erreur à l'ouverture !" << endl;
	}
	return Edges;

}









/*
	

	ifstream fichier2("txt//stations_metro.csv", ios::in);
	//on peut templater cette fonction avec des arguments optionnels =NULL par defaut ? et mettre dans la fonction : si null then pour s'adapter selon l'objet à construire ?
    if(fichier2)  // si l'ouverture a réussi
    {	
		unsigned int i;
		i=0;
		while(!fichier2.eof())  // tant que l'on peut mettre la ligne dans "contenu"
		{
			for(unsigned int j=0;j<3;j++)
			{
				char caractere;
				do
				{
					fichier2.get(caractere);
				}
				while(caractere!='#');
			}//we are now on the first caracter of the name of the station
			char caractere;
			string station_name;
			fichier2.get(caractere);
			do
			{
				station_name.append(1u,caractere);
				fichier2.get(caractere);
			}
			while(caractere!='#');
			

			spNode spstation(new Node(station_name));  //i joue le rôle d'identifiant
			(*stations)[i]=spstation;
			cout << i << station_name << "\n";
		//		InsertEnd(lines,spline); //insert at the end of the vector the ieth line. lines[0] is the line 1!
			getline(fichier2, ligne);  //pour lire la fin de la ligne et se replacer à la ligne suivante
			i+=1;
		}
		fichier2.close();  // on referme le fichier
    }
    else  // sinon
	{
            cerr << "Erreur à l'ouverture !" << endl;
	}*/