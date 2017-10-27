#pragma once
class cell
{
public:
	cell(int x=0, int y=0);

	void setValue(int v);

	int getValue();
	int getRow();
	int getCol();
	set<int> getNotes();

	void addNote(int val);
	void eraseNote(int val);

	// Cell content
	bool isEmpty(); // Determines if cell is empty.
	void clear(); // Removes item in cell and empties it.
	void clearNotes(); // Only clears the notes from the cell.

	~cell();

private:
	int value = 0;
	const int row;
	const int col;
	set<int> notes;
};

