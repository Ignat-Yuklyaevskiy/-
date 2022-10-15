#include "Rhomb.h"
#include <cmath>

Rhomb::Rhomb() : p(Point()), width(1), height(1) { }

Rhomb::Rhomb(Point p, int width, int height) :
	p(p), width(width), height(height) { }

Point Rhomb::getPoint()
{
	return this->p;
}

int Rhomb::getWidth()
{
	return this->width;
}

int Rhomb::getHeight()
{
	return this->height;
}

double Rhomb::getSquare()
{
	return (this->width * this->height) / 2.0;
}

double Rhomb::getPerimeter()
{
	return sqrtl(width * width + height * height) * 2;
}
