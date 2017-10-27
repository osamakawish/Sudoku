#pragma once
class board
{
public:
	board(); // initializes an empty board.
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

	int boxNumber(int x, int y); // Boxes are numbered 1 - boardSize, left - right then up - down.
	int boxNumber(cell c); // Box number for a specific cell.
	int boxRow(int row); // Get the row of the box given its cell row.
	int boxCol(int col); // Get the column of the box given its cell column.

	void removeNumber(cell c);

	void clearCell(cell c);

	void fillBoard();

	// Need methods to deal with solutions from current board.

private:
	
	int boardSize = 0; // The square root of the width of the square game board.

	vector<vector<cell>> contents = {}; // The content of the board.
	map<int, set<cell>> locations = {}; // Determines where each integer is located.
};
