#include "Point.h"
class GeomFunc
{
	static double length(Point p1, Point p2);
	static Point midPoint(Point p1, Point p2);
	void getClosest(Point* points, int size, Point* p1, Point* p2);
};

