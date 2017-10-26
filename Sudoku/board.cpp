#include "stdafx.h"
#include "board.h"
#include "cell.h"
#include <vector>
#include <set>
#include <map>
#include <random>
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

	// Initial vectors inside the contents variable.
	// contents type: vector<vector<cell>>
	for (int i = 0; i < s*s; i++)
	{
		contents.push_back({});
	}

	// Add all the cells to the board.
	for (int i = 0; i < s*s; i++)
	{
		vector<cell> v = contents.at(i);
		for (int j = 0; j < s*s; j++)
		{
			v.push_back(cell(i, j));
		}
	}
}

void board::setCell(cell c, int v)
{
}

vector<int> board::row(int)
{
	return vector<int>();
}

vector<int> board::column(int)
{
	return vector<int>();
}

vector<int> board::box(int x, int y)
{
	return vector<int>();
}

void board::clearBoard()
{
}

void board::setMain()
{
}

vector<vector<int>> board::createRandom()
{
	return vector<vector<int>>();
}
