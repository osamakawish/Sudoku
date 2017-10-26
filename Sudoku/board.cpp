#include "stdafx.h"
#include "board.h"	// Header file.
#include "cell.h"	// The cells of the game board.
#include <vector>	// The contents of the game board itself.
#include <set>		// Store info where each integer has been placed so far.
#include <map>		// Store info where each integer has been placed so far.
using namespace std;


board::board()
{

}

board::board(vector<vector<cell>> s)
{
	
}

board::~board()
{
}

string board::view()
{
	return string();
}

int board::getSize()
{
	return boardSize;
}

cell board::getCell(int x, int y)
{
	return contents.at(x).at(y); // The cell at coordinates (x, y).
}

void board::setSize(int s)
{
	// Cannot change the size of the board.
	if (boardSize != 0) {
		throw new exception("value of boardSize already defined.");
	}
	
	// Set the value of variable boardSize to s.
	boardSize = s;

	// Initialize empty vectors inside the contents variable.
	// contents type: vector<vector<cell>>
	for (int i = 0; i < s*s; i++)
	{
		// Adds the empty vector.
		contents.push_back({});

		// Initialize empty set to each number's location set.
		locations.insert({ i + 1, {} });
	}

	// Add all the cells to the board.
	for (int i = 0; i < s*s; i++)
	{
		// The i'th row on the board.
		vector<cell> row = contents.at(i); 
		for (int j = 0; j < s*s; j++)
		{
			// Cell indexing starts at 0.
			row.push_back(cell(i+1, j+1)); 
		}
	}
}

void board::setCell(cell c, int v) 
{
	c.setValue(v);
	// UNFINISHED: Store info in each of the maps. 
	locations[v].insert(c);
}

vector<cell> board::row(int r) // Requires r < boardSize*boardSize
{
	return contents[r];
}

vector<cell> board::column(int c) // Requires c < boardSize*boardSize
{
	vector<cell> toReturn = {};

	// r = Row number of game board
	for (int r = 0; r < boardSize*boardSize; r++) 
	{
		// Contents = vector<vector<cell>> - ie. The game board itself.
		vector<cell> row = contents[r]; // The vector at row r.
		toReturn.push_back(row[c]);
	}
	
	return toReturn;
}

vector<cell> board::box(int x, int y) // Requires (x < boardSize) and (y < boardSize)
{
	vector<cell> toReturn = {};
	
	// Rows go from nx to n(x+1). Columns from ny to n(y+1)
	int n = boardSize; 
	
	// Add all appropriate cells to toReturn.
	for (int row = n*x; row < n*(x+1); row++)
	{
		for (int col = n*y; col < n*(y + 1); col++) {
			// Adds appropriate cells to the vector to be returned.
			toReturn.push_back(contents[row][col]); 
		}
	}

	return toReturn;
}

int board::boxNumber(int x, int y)
{
	return 3*x + y;
}

int board::boxRow(int cellRow)
{
	return (cellRow / boardSize) + 1;
}

int board::boxCol(int cellCol)
{
	return (cellCol / boardSize) + 1;
}
