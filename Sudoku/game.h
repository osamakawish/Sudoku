#pragma once
class game
{
public:
	game(int gSize, int difficulty);
	~game();

private:
	set<int> values; int difficulty;
	board gameBoard;
	board createRandomBoard(); // Creates a random workable board.
	set<board> solution(); // Checks if there's a solution from the current state.
};

