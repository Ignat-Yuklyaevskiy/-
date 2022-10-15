#include "Point.h"

Point::Point() : Point(0, 0) { }

Point::Point(int x, int y) : x(x), y(y) { }

int Point::getX()
{
	return this->x;
}

int Point::getY()
{
	return this->y;
}

