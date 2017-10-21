// Sudoku.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include "game.h"
using namespace std;

int gameSize; int difficulty;

// Need game board class.

void promptGame() {
	cout << "Please state the size of the board." << endl;
	cout << "A size of n will give a game board of length and width n x n each." << endl;
	cout << "The size must be positive." << endl;
	cin >> gameSize;
	cout << "PLease state the difficulty."; cin >> difficulty;
	cout << endl;
}

int main()
{

    // Request game board: Size and difficulty. Max difficulty <= size.
	// If size = 3 (ie. 9x9 board), then difficulty in {1, 2, 3} (3 = hardest.)
	promptGame();

	// Check correct sizing. 
	while (gameSize < 0 || difficulty < 0 || difficulty > gameSize)
	{
		promptGame();
	}
	
	// Create game board based on size and difficulty.
	game G = game(gameSize, difficulty);
	
	// Run the game.
	
	return 0;
}

