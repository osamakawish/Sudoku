#pragma once
class board // The board class for the sudoku game.
{
public:
	board();
	~board();

	// Setting up the board.
	void setSize(); // Sets the size, defines the width, and creates all empty cells inside gameBoard constant.

	// The main methods to be defined.
	void createRandomBoard(); // Create a random board from an empty one.
	board next(); // Does all obvious moves for the current board, going from top-left to bottom-right block.
	string view(); // Outputs the current board as a string.
	bool isSolvable(); // Returns true iff board is solvable.

private:
	// The basic traits.
	int size; int width; // width = size*size = width of the square game board.
	vector<vector<cell>> gameBoard; // The board itself. First coordinate = row. Second = col.

	// For computational efficiency.
	map<int, unordered_set<cell>> intCells = {}; // A map to the set of cells where each integer is.
	
	bool issolvable; // Remains true iff the board is not found. 

	// Additional useful attributes for computational efficiency placed under here.


	// Helper methods placed under here
	int block(cell c); // Block 1 = top-left. Last block = bottom right.
};

