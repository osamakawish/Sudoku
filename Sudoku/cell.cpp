#include "stdafx.h"
#include "cell.h"	// Header file.
#include <set>		// Noted integers placed on cell.
using namespace std;


cell::cell(int x, int y) : row(x+1), col(y+1)
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

int cell::getBox()
{
	return 0;
}

int cell::getRow()
{
	return 0;
}

int cell::getCol()
{
	return 0;
}

int cell::getNotes()
{
	return 0;
}

void cell::addNote(int val)
{
}

void cell::removeNote(int val)
{
}

bool cell::isEmpty()
{
	return false;
}

void cell::clear()
{
}


cell::~cell()
{
}
