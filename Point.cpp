//!
//! \file Point.cpp
//!

#include <cmath>
#include "Point.h"
using namespace std;

#define PI 3.14159265358979323846

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
	int newX = (int)((this->x - x) * coeff) + x ;
	int newY = (int)((this->y - y) * coeff) + y ;

	return Point(newX, newY);
}

Point Point::rotation(int x, int y, double angle) const
{
	int newX = (int)((this->x - x)* cos(angle * PI / 180) - (this->y - y)* sin(angle * PI / 180)) + x;
	int newY = (int)((this->x - x)* sin(angle * PI / 180) + (this->y - y)* cos(angle * PI / 180)) + y;
	return Point(newX, newY);
}
