#pragma once
class game
{
public:
	game(int gSize, int difficulty);
	~game();

private:
	set<int> values; int difficulty;
	board gameBoard;
	set<board> solution(); // Checks if there's a solution from the current state.
};

