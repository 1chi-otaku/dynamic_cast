#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
	double rectangle_field;
public:
	Rectangle():Figure() { rectangle_field = 0; }
	Rectangle(double c,int f):Figure(f) { rectangle_field = c; }
};

