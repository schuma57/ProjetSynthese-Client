//!
//! \file Segment.cpp
//!

#include "Segment.h"
#include "Visitor.h"


Segment::Segment(const Couleur::couleurs & c, const Point & p1, const Point & p2) : FormeSimple(c), point1(p1), point2(p2)
{
}

Segment::Segment(const Couleur::couleurs & color, int a, int b, int c, int d) : FormeSimple(color), point1(a,b), point2(c,d)
{
}

Segment::~Segment()
{
}

Point Segment::getPoint1() const
{
	return point1;
}

void Segment::setPoint1(const Point & p)
{
	point1 = p;
}

Point Segment::getPoint2() const
{
	return point2;
}

void Segment::setPoint2(const Point & p)
{
	point2 = p;
}

double Segment::calculAire() const
{
	return 0;
}

FormeGeometrique* Segment::translation(int l, int h)
{
	return new Segment(getCouleur(), point1.translation(l,h), point2.translation(l,h) );
}

FormeGeometrique* Segment::homothetie(int x, int y, double coeff)
{
	return new Segment(getCouleur(), point1.homothetie(x,y,coeff), point2.homothetie(x,y,coeff) );
}

FormeGeometrique* Segment::rotation(int x, int y, double angle)
{
	return new Segment(getCouleur(), point1.rotation(x,y,angle) , point2.rotation(x,y,angle) );
}


void Segment::accept(Visitor * v)
{
	v->visiteSegment(*this);
}

Segment::operator string() const
{
	string str = "Seg " + getCouleurToString() + " "
		+ to_string(point1.getX()) + " " + to_string(point1.getY()) + " "
		+ to_string(point2.getX()) + " " + to_string(point2.getY());

	return str;
}
