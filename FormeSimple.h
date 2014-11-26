#ifndef FORMESIMPLE
#define FORMESIMPLE
#pragma once

#include "FormeGeometrique.h"

class FormeSimple : public FormeGeometrique
{
public:
	FormeSimple(const Couleur::couleurs & c);
	virtual ~FormeSimple();

	virtual double calculAire() const = 0;
	virtual FormeGeometrique* translation(int l, int h) = 0;
	virtual FormeGeometrique* homothetie(int x, int y, double coeff) = 0;
	virtual FormeGeometrique* rotation(int x, int y, double angle) = 0;

	virtual operator string() const = 0;
	virtual void accept(Visitor * v) = 0;
};

#endif
