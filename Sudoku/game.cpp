#include "stdafx.h"
#include "game.h"
#include "board.h"
#include "cell.h"
#include <vector>
#include <set>
#include <random>
using namespace std;

game::game(int gsize, int difficulty)
{
	
}

game::~game()
{
}

void game::addInput(cell c, int value)
{
}

board game::createRandomBoard()
{
	return board();
}

set<board> game::solution()
{
	return set<board>({});
}

set<board> next(board) {

}
