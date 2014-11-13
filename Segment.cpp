#include "Segment.h"
#include "Visitor.h"


Segment::Segment(const string & s, const Point & p1, const Point & p2) : FormeSimple(s), point1(p1), point2(p2)
{
}

Segment::Segment(const string & s, int a, int b, int c, int d) : FormeSimple(s), point1(a,b), point2(c,d)
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

void Segment::accept(Visitor * v)
{
	v->visiteSegment(*this);
}

Segment::operator string() const
{
	string str = "Seg "
		+ to_string(point1.getX()) + " " + to_string(point1.getY()) + " "
		+ to_string(point2.getX()) + " " + to_string(point2.getY());

	return str;
}
