#include "stdafx.h"
#include "board.h"
#include <vector>
#include <random>
using namespace std;


board::board(int gSize, int diff) : gameSize(gSize), difficulty(diff)
{
	
}

board::~board()
{
}

vector<vector<int>> board::createRandomGame()
{
	return vector<vector<int>>();
}

void board::hasSolution()
{
}

int board::row(int, int)
{
	return 0;
}

int board::col(int, int)
{
	return 0;
}
