#pragma once
class game
{
public:
	game(int gSize, int difficulty);
	~game();

	void addInput(int coords[2], int value);

private:
	set<int> values; int difficulty;
	board gameBoard;
	set<board> solution(); // Checks if there's a solution from the current state.
};

