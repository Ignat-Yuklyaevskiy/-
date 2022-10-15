#pragma once
#include "Point.h"

class Rhomb
{
private:
	Point p;
	int width;
	int height;
public:
	Rhomb();
	Rhomb(Point p, int width, int height);
	Point getPoint();
	int getWidth();
	int getHeight();
	double getSquare();
	double getPerimeter();
};

