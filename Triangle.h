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

	Point getBase1() const;
	Point getBase2() const;
	Point getSommet() const;

	double calculAire() const;
	virtual FormeGeometrique* translation(int l, int h);
	virtual FormeGeometrique* homothetie(int x, int y, double coeff);
	virtual FormeGeometrique* rotation(int x, int y, double angle);

	virtual operator string() const;
	virtual void accept(Visitor * v) ;
};

#endif
