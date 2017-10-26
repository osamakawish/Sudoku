#pragma once
class game
{
public:
	game(int gSize, int difficulty);
	~game();

	void addInput(cell c, int value);

private:
	board createRandomBoard();

	set<int> values; int difficulty;
	board current; // The current game board.
	board main; // The main game board.
	set<board> solution(); // Checks if there's a solution from the current state.
};

