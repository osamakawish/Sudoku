#pragma once
class game
{
public:
	game(int gSize, int difficulty);
	~game();

	cell goToCell(int x, int y);

	void clearBoard(); // Clear the board and resets it to main.

	void setMain(); // Sets current board as main board. For resetting game if necessary.

private:
	board createRandomBoard();

	int size; int difficulty;

	cell location;
	set<int> values; int difficulty;
	board current; // The current game board.
	board main; // The main game board.
	set<board> solution(); // Checks if there's a solution from the current state.
};

