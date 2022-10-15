#include "GeomFunc.h"
#include <cmath>

double GeomFunc::length(Point p1, Point p2)
{
	return sqrt(pow(p2.getX() - p1.getX(), 2) + pow(p2.getX() - p1.getX(), 2));
}

void GeomFunc::getClosest(Point* points, int size, Point* p1, Point* p2)
{
	if (size > 2)
	{
		double minLen = length(points[0], points[1]);
		*p1 = points[0];
		*p2 = points[1];
		for (size_t i = 0; i < size; i++)
			for (size_t j = i + 1; j < size; j++)
				if (length(points[i], points[j]) < minLen)
				{
					minLen = length(points[i], points[j]);
					*p1 = points[i];
					*p2 = points[j];
				}
	}
}
