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
	int rayon;

public:
	//!
	//! \brief Constructeur par point
	//!
	Cercle(const Couleur::couleurs &, const Point &, int r);
	//!
	//! \brief Constructeur par coordonnees
	//!
	Cercle(const Couleur::couleurs &, int x, int y, int r);
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
	virtual FormeGeometrique* translation(int l, int h);
	//!
	//! \brief override
	//!
	virtual FormeGeometrique* homothetie(int x, int y, double coeff);
	//!
	//! \brief override
	//!
	virtual FormeGeometrique* rotation(int x, int y, double angle);

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
