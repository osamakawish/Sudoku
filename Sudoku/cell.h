#pragma once
class cell
{
public:
	cell(int row, int col);
	~cell();

	// Getters
	int getRow(); int getCol();

	// Setters
	void setValue(int v);
	void setCoords(int row, int col);

	void addNote(int x);

private:
	int row = 0; int col = 0; // Row and column of the cell.
	int value = 0;
	set<int> notes = {}; // The noted integers on the cell;
};

