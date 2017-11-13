#pragma once
class cell
{
public:
	cell();
	~cell();

private:
	int row; int col; // Row and column of the cell.
	set<int> notes; // The noted integers on the cell;
};

