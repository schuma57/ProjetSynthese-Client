//!
//! \file Polygone.cpp
//!

#include "Polygone.h"
#include "Visitor.h"

Polygone::Polygone(const Couleur::couleurs & c, const vector<Point> & liste) : FormeSimple(c), listePoints(liste)
{
}

Polygone::~Polygone()
{
}

vector<Point> Polygone::getListePoints() const
{
	return listePoints;
}


double Polygone::calculAire() const
{
	double aire = 0;

	for (size_t i = 2; i < listePoints.size(); i++)
	{
		aire += Triangle(getCouleur(), listePoints[0], listePoints[i - 1], listePoints[i]).calculAire();
	}

	return aire;
}

FormeGeometrique* Polygone::translation(double l, double h)
{
	vector<Point> temp;
	for (auto point : listePoints)
		temp.push_back(point.translation(l,h));
	return new Polygone(getCouleur(), temp);
}

FormeGeometrique* Polygone::homothetie(double x, double y, double coeff)
{
	vector<Point> temp;
	for (auto point : listePoints)
		temp.push_back(point.homothetie(x, y, coeff));
	return new Polygone(getCouleur(), temp);
}

FormeGeometrique* Polygone::rotation(double x, double y, double angle)
{
	vector<Point> temp;
	for (auto point : listePoints)
		temp.push_back(point.rotation(x, y, angle));
	return new Polygone(getCouleur(), temp);
}


void Polygone::accept(Visitor * v)
{
	v->visitePolygone(*this);
}

Polygone::operator string() const
{
	string str = "Poly " + getCouleurToString();
	for (auto point : listePoints)
		str += " " + to_string(point.getX()) + " " + to_string(point.getY());
	return str;
}
