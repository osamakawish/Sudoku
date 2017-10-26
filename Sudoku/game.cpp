#include "stdafx.h"
#include "game.h"	// Header file.
#include "board.h"	// The game board.
#include "cell.h"	// The cells of the game board.
#include <set>		// Evaluate solution set from current game board.
#include <random>	// Create random board.
#include <time.h>	// Random seed.
using namespace std;

game::game(int gsize, int difficulty)
{
	board();
}

game::~game()
{
}

cell game::goToCell(int x, int y)
{
	return cell(x, y);
}

void game::addInput(cell c, int value)
{
}

void game::clearBoard()
{
}

void game::setMain()
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
