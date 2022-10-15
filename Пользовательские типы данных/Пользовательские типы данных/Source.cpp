#include <iostream>
#include "Rhomb.h"
// ((int('I') + int('Y')) % 11) = 8



int main()
{
	Rhomb r(Point(), 6, 9);
	std::cout << r.getPerimeter();
}
