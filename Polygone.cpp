#include "Polygone.h"
#include "Visitor.h"

Polygone::Polygone(const string & s, const vector<Point> & liste) : FormeSimple(s), listePoints(liste)
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
	return 0; //TODO
}

FormeGeometrique* Polygone::translation(int l, int h)
{
	vector<Point> temp;
	for (auto point : listePoints)
		temp.push_back(point.translation(l,h));
	return new Polygone(getNom(), temp);
}

FormeGeometrique* Polygone::homothetie(int x, int y, double coeff)
{
	vector<Point> temp;
	for (auto point : listePoints)
		temp.push_back(point.homothetie(x, y, coeff));
	return new Polygone(getNom(), temp);
}

FormeGeometrique* Polygone::rotation(int x, int y, double angle)
{
	vector<Point> temp;
	for (auto point : listePoints)
		temp.push_back(point.rotation(x, y, angle));
	return new Polygone(getNom(), temp);
}


void Polygone::accept(Visitor * v)
{
	v->visitePolygone(*this);
}

Polygone::operator string() const
{
	string str = "Poly";
	for (auto point : listePoints)
		str += " " + to_string(point.getX()) + " " + to_string(point.getY());
	return str;
}
