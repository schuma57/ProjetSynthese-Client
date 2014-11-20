#ifndef SEGMENT
#define SEGMENT
#pragma once

#include "FormeSimple.h"
#include "Point.h"

class Segment : public FormeSimple
{
private:
	Point point1;
	Point point2;

public:
	Segment(const string &, const Point & p1, const Point & p2);
	Segment(const string &, int a, int b, int c, int d);
	virtual ~Segment();

	Point getPoint1() const;
	void setPoint1(const Point & p);
	Point getPoint2() const;
	void setPoint2(const Point & p);

	double calculAire() const;
	virtual FormeGeometrique* translation(int l, int h);
	virtual FormeGeometrique* homothetie(int x, int y, double coeff);
	virtual FormeGeometrique* rotation(int x, int y, double angle);

	virtual operator string() const;
	virtual void accept(Visitor * v);
};

#endif
