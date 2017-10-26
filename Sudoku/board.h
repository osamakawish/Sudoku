#pragma once
class board
{
public:
	board();
	board(vector<vector<int>>);
	~board();

	// For determining what's located where.
	vector<int> row(int);
	vector<int> column(int);
	vector<int> cell(int x, int y);
	
	void isEmpty(int row, int col);
	int at(int row, int col);
	
	void remove(int);
	
	void fixBoard(); // Sets current board as main board. For resetting game if necessary.

	vector<vector<int>> createRandom(); // Creates a random board and assigns it as the main one.

private:
	
	map<int, int[2]> locations;

	const vector<vector<int>> mainBoard; // The main board to be solved.

	// Location set of each number
	map<int, int> rows;
	map<int, int> columns;
	map<int, int> boxes;
};
