#pragma once
class cell
{
public:
	cell(int x=0, int y=0);

	void setValue(int v);

	int getValue();
	int getBox();
	int getRow();
	int getCol();
	int getNotes();

	void addNote(int val);
	void removeNote(int val);

	// Cell content
	bool isEmpty(); // Determines if cell is empty.
	void clear(); // Removes item in cell and empties it.

	~cell();

private:
	int value = 0;
	const int row;
	const int col;
	set<int> notes;
};

