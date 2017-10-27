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
	createRandomBoard();
}

game::~game()
{
}

cell game::goToCell(int x, int y)
{
	return current.getCell(x, y);
}

void game::clearBoard() // May want to be cautious about this.
{
	current = main;
}

board game::createRandomBoard()
{
	//// Initialize size x size game board.
	//board toReturn = board();
	//toReturn.setSize(game::size);
	//
	//srand(time(NULL)); // Random seed.

	//int x = rand() % (toReturn.getSize() ^ 2);

	//main = toReturn; current = toReturn;
	//return board();
}

set<board> game::solution()
{
	return set<board>({});
}

set<board> next(board) {

}
