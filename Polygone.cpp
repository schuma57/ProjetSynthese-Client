#include "Polygone.h"
#include "Visitor.h"

Polygone::Polygone(const string & s) : FormeSimple(s)
{
}

Polygone::~Polygone()
{
}

vector<Point> Polygone::getListePoints() const
{
	return listePoints;
}

void Polygone::ajouterPoint(int x, int y)
{
	Point p(x, y);
	listePoints.push_back(p);
}


double Polygone::calculAire() const
{
	return 0;
}

FormeGeometrique* Polygone::translation(int l, int h)
{
	return NULL;
}

FormeGeometrique* Polygone::homothetie(int x, int y, double coeff)
{
	return NULL;
}


void Polygone::accept(Visitor * v)
{
	v->visitePolygone(*this);
}

Polygone::operator string() const
{
	string str = "Poly ";
	return str;
}
