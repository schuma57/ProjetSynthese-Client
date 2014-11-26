#ifndef CERCLE
#define CERCLE
#pragma once

#include "FormeSimple.h"
#include "Point.h"

class Cercle : public FormeSimple
{
private:
	Point centre;
	int rayon;

public:
	Cercle(const Couleur::couleurs &, const Point &, int r);
	Cercle(const Couleur::couleurs &, int x, int y, int r);
	virtual ~Cercle();

	double calculAire() const;
	virtual FormeGeometrique* translation(int l, int h);
	virtual FormeGeometrique* homothetie(int x, int y, double coeff);
	virtual FormeGeometrique* rotation(int x, int y, double angle);

	virtual operator string() const;
	virtual void accept(Visitor * v);
};

#endif
