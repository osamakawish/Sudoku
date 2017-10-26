#include "stdafx.h"
#include "game.h"
#include "board.h"
#include <vector>
#include <set>
#include <random>
using namespace std;

game::game(int gsize, int difficulty)
{
	gameBoard = createRandomBoard();
}

game::~game()
{
}



board game::createRandomBoard() 
{
	return board({});
}

set<board> game::solution()
{
	return set<board>({});
}

set<board> next(board) {

}
