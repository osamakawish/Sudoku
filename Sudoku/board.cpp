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
	return 0;
}

cell board::getCell(int x, int y)
{
	return cell(x, y);
}

void board::setSize()
{
}

void board::pushCell(int x, int y)
{
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
