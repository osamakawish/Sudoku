#pragma once
class cell
{
public:
	cell(int x, int y);

	void setValue();

	int getBox();
	int getRow();
	int getCol();
	int getNotes();

	void addNote(int val);
	void removeNote(int val);

	// Cell content
	bool isEmpty(); // Determines if cell is empty.
	int value(); // Returns the value at a given cell.
	void clear(); // Removes item in cell and empties it.

	~cell();

private:
	int value;
	const int row;
	const int col;
	set<int> notes;
};

