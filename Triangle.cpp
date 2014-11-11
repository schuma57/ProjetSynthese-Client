#include "Triangle.h"
#include "Visitor.h"


Triangle::Triangle(const string & s, const Point & p1, const Point & p2, const Point & p3) : 
	FormeSimple(s), base1(p1), base2(p2), sommet(p3)
{
}

Triangle::Triangle(const string & s, int a, int b, int c, int d, int e, int f) :
	FormeSimple(s), base1(a,b), base2(c,d), sommet(e,f)
{
}

Triangle::~Triangle()
{
}


double Triangle::calculAire() const
{
	double aire = abs( 
		((base2.getX() - sommet.getX()) * (base1.getY()-sommet.getY()))
		- ((base1.getX() - sommet.getX()) * (base2.getY()-sommet.getY()))
	) / 2 ;
	return aire;
}

void Triangle::accept(Visitor * v)
{
	v->visiteTriangle(*this);
}

Triangle::operator string() const
{
	string str = "Tri "
		+ to_string(base1.getX() ) + " " + to_string(base1.getY()) + " "
		+ to_string(base2.getX() ) + " " + to_string(base2.getY()) + " "
		+ to_string(sommet.getX()) + " " + to_string(sommet.getY());

	return str;
}
