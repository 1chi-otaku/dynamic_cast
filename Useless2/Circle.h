#pragma once
#include "Figure.h"
class Circle: public Figure
{
	double circle_field;
public:
	Circle():Figure() { circle_field = 0; }
	Circle(double c, int f):Figure(f) { circle_field = c; }
};

