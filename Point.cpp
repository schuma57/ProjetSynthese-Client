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

Point Point::translation(int l, int h) const
{
	return Point(x + l, y + h);
}

Point Point::homothetie(int x, int y, double coeff) const
{
	int newX = (int)(this->x - x) * coeff;
	int newY = (int)(this->y - y) * coeff;

	return Point(newX, newY);
}
