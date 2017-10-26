#include "stdafx.h"
#include "cell.h"
#include <set>
using namespace std;


cell::cell(int x, int y) : row(x), col(y)
{
}

void cell::setValue(int v)
{
	int value = v;
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

int cell::value()
{
	return 0;
}

void cell::clear()
{
}


cell::~cell()
{
}
