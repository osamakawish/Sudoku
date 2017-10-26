#pragma once
class board
{
public:
	board(); // initializes an empty board.
	board(vector<vector<cell>> b);
	~board();

	// Creating from empty board. Cannot do first two if main board is defined.
	void setSize(int s); // Sets the size of the board.
	void setCell(cell c, int v); // Gives value to given cell.

	// View the content of the board.
	string view();

	// Getters
	int getSize();
	cell getCell(int x, int y);

	// For determining what's located where.
	vector<cell> row(int num); // Return contents of the num'th row.
	vector<cell> column(int num); // Return contents of the num'th column.
	vector<cell> box(int x, int y); // Return contents of given boardSize x boardSize box.

	vector<vector<int>> createRandom(); // Creates a random board and assigns it as the main one.

private:
	
	int boardSize = 0; // The square root of the width of the square game board.

	vector<vector<cell>> contents = {}; // The content of the board.
	map<int, set<cell>> locations; // Determines where each integer is located.

	// Location set of each number
	map<int, int> rows = {};
	map<int, int> columns = {};
	map<int, int> boxes = {};
};
