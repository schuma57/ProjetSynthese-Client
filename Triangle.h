#ifndef TRIANGLE
#define TRIANGLE
#pragma once

#include "FormeSimple.h"
#include "Point.h"

class Triangle : public FormeSimple
{
private:
	Point base1;
	Point base2;
	Point sommet;

public:
	Triangle(const string &, const Point & p1, const Point & p2, const Point & p3);
	Triangle(const string &, int a, int b, int c, int d, int e, int f);
	virtual ~Triangle();

	virtual operator string() const;
	double calculAire() const;
	virtual void accept(Visitor * v) ;
};

#endif
