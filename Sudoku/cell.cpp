#include "stdafx.h"
#include "cell.h"
#include <set>
using namespace std;


cell::cell(int row, int col)
{
}


cell::~cell()
{
}

int cell::getRow()
{
	return row;
}

int cell::getCol()
{
	return col;
}

void cell::setValue(int v)
{
	value = v;
}

void cell::setCoords(int r, int c)
{
	row = r; col = c;
}

void cell::addNote(int x)
{
	notes.insert(x);
}
