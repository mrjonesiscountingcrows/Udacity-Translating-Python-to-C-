/**
	debugging_helpers.cpp
	
	Purpose: helper functions for debugging when working
	with grids of floats and chars.
*/


#ifndef DEBUGGING_HELPER
#define DEBUGGING_HELPER

#include <vector>
#include <iostream>      //Had to add this in order to build code on my computer. It won't build otherwise
using namespace std;

/**
    Displays a grid of beliefs. Does not return.

    @param grid - a two dimensional grid (vector of 
    	   vectors of floats) which will usually 
    	   represent a robot's beliefs.
*/
void show_grid(vector < vector <float> > grid) {
	int i, j;
	float p;
	vector<float> row;
	for (i = 0; i < grid.size(); i++)
	{
		row = grid[i];
		for (j=0; j< row.size(); j++)
		{
			p = row[j];	
			cout << p << ' ';
		}
		cout << endl;
	}
}

/**
    Displays a grid map of the world
*/
void show_grid(vector < vector <char> > map) {
	int i, j;
	char p;
	vector<char> row;
	for (i = 0; i < map.size(); i++)
	{
		row = map[i];
		for (j=0; j< row.size(); j++)
		{
			p = row[j];	
			cout << p << ' ';
		}
		cout << endl;
	}
}

#endif
