#pragma once
class board
{
public:
	board(); // initializes an empty board.
	board(vector<vector<cell>> g);
	~board();

	// Creating from empty board. Cannot do first two if main board is defined.
	void setSize(); // Sets the size of the board.
	void pushCell(int x, int y); // Initializes new cell at given coordinates.
	void setCell(cell c, int v); // Gives value to given cell.

	// View the content of the board.
	string view();

	// Getters
	int getSize();
	cell getCell(int x, int y);

	// For determining what's located where.
	vector<int> row(int num); // Return contents of the num'th row.
	vector<int> column(int num); // Return contents of the num'th column.
	vector<int> box(int x, int y); // Return contents of given box.

	void clearBoard(); // Clear the board and resets it to main.
	
	void setMain(); // Sets current board as main board. For resetting game if necessary.

	vector<vector<int>> createRandom(); // Creates a random board and assigns it as the main one.

private:
	
	int size = 0; // The square root of the width of the square game board.

	map<int, set<cell>> currentLocations; // Determines where each integer is located.
	map<int, set<cell>> mainLocations; // Determines where each integer is located.

	vector<vector<int>> current; // The current state of the board.
	const vector<vector<int>> main; // The main board to be solved. Default is empty board.

	// Location set of each number
	map<int, int> rows = {};
	map<int, int> columns = {};
	map<int, int> boxes = {};
};
