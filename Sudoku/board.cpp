#include "stdafx.h"
#include "board.h"
#include "cell.h"
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;


board::board()
{
}


board::~board()
{
}

void board::setSize()
{
}

void board::createRandomBoard()
{
}

board board::next()
{
	return board();
}

string board::view()
{
	return string();
}

bool board::isSolvable()
{
	return false;
}

int board::block(cell c)
{
	int x = c.getRow() - (c.getCol() % size) + 1; 
	int y = c.getRow() - (c.getRow() % size);

	return size * y + x;
}
