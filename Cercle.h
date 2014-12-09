#ifndef CERCLE
#define CERCLE
#pragma once

//!
//! \file Cercle.h
//! \author Yacine
//!

#include "FormeSimple.h"
#include "Point.h"

//!
//! \class Cercle
//! \brief herite de FormeSimple
//!
class Cercle : public FormeSimple
{
private:
	//!
	//! centre du cercle
	//!
	Point centre;
	//!
	//! rayon du cercle
	//!
	double rayon;

public:
	//!
	//! \brief Constructeur par point
	//!
	Cercle(const Couleur::couleurs &, const Point &, double r);
	//!
	//! \brief Constructeur par coordonnees
	//!
	Cercle(const Couleur::couleurs &, double x, double y, double r);
	//!
	//! \brief Destructeur
	//!
	virtual ~Cercle();

	//!
	//! \brief override
	//!
	double calculAire() const;
	//!
	//! \brief override
	//!
	virtual FormeGeometrique* translation(double l, double h);
	//!
	//! \brief override
	//!
	virtual FormeGeometrique* homothetie(double x, double y, double coeff);
	//!
	//! \brief override
	//!
	virtual FormeGeometrique* rotation(double x, double y, double angle);

	//!
	//! \brief override
	//!
	virtual operator string() const;
	//!
	//! \brief override
	//!
	virtual void accept(Visitor * v);
};

#endif
