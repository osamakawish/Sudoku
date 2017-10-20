#include "stdafx.h"
#include "board.h"
#include <vector>
#include <unordered_set>
#include <random>
using namespace std;


board::board(int gSize, int diff) : difficulty(diff)
{
	unordered_set<int> values = {};

	for (int i = 1; i <= gSize*gSize; i++) {values.insert(i);}
}

board::~board()
{
}



vector<vector<int>> board::createRandomGame()
{
	vector<vector<int>> toReturn = {};
	unordered_set<int> V = values;



	return toReturn;
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
