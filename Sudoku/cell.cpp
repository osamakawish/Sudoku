#include "stdafx.h"
#include "cell.h"	// Header file.
#include <set>		// Noted integers placed on cell.
using namespace std;


cell::cell(int x, int y) : row(x), col(y)
{
}

void cell::setValue(int v)
{
	int value = v;
}

int cell::getValue()
{
	return value;
}

int cell::getRow()
{
	return row;
}

int cell::getCol()
{
	return col;
}

set<int> cell::getNotes()
{
	return notes;
}

void cell::addNote(int val)
{
	notes.insert(val);
}

void cell::eraseNote(int val)
{
	notes.erase(val);
}

bool cell::isEmpty()
{
	return value != 0;
}

void cell::clear()
{
	value = 0; notes = {};
}

void cell::clearNotes()
{
	notes = {};
}

cell::~cell()
{
}
