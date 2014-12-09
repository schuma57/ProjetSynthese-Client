//!
//! \file Point.cpp
//!

#include <cmath>
#include "Point.h"
using namespace std;

#define PI 3.14159265358979323846

Point::Point(double a, double b)
{
	this->x = a;
	this->y = b;
}

Point::~Point()
{
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

Point Point::translation(double l, double h) const
{
	return Point(x + l, y + h);
}

Point Point::homothetie(double x, double y, double coeff) const
{
	double newX = ((this->x - x) * coeff) + x ;
	double newY = ((this->y - y) * coeff) + y ;

	return Point(newX, newY);
}

Point Point::rotation(double x, double y, double angle) const
{
	double newX = ((this->x - x)* cos(angle * PI / 180) - (this->y - y)* sin(angle * PI / 180)) + x;
	double newY = ((this->x - x)* sin(angle * PI / 180) + (this->y - y)* cos(angle * PI / 180)) + y;
	return Point(newX, newY);
}
