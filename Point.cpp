#include "Point.h"


Point::Point(int a, int b)
{
	this->x = a;
	this->y = b;
}

Point::~Point()
{
}

int Point::getX() const
{
	return x;
}

int Point::getY() const
{
	return y;
}
