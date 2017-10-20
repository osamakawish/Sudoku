#pragma once
class board
{
public:
	board(int gameSize, int diffifuclty);
	~board();

private:
	unordered_set<int> values; int difficulty;
	vector<vector<int>> game;
	vector<vector<int>> createRandomGame(); // Creates a random workable board.
	void hasSolution(); // Checks if there's a solution from the current state.
	int row(int, int); // Determines the row of cell given block index and cell index inside block.
	int col(int, int); // Determines the col of cell given block index and cell index inside block.
};
