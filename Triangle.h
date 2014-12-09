#ifndef TRIANGLE
#define TRIANGLE
#pragma once

//!
//! \file Triangle.h
//! \author Florian
//!

#include "FormeSimple.h"
#include "Point.h"

//!
//! \class Triangle
//! \brief herite de FormeSimple
//!
class Triangle : public FormeSimple
{
private:
	Point base1;
	Point base2;
	Point sommet;

public:
	//!
	//! \brief Constructeur par coordonnees
	//!
	Triangle(const Couleur::couleurs &, const Point & p1, const Point & p2, const Point & p3);
	//!
	//! \brief Constructeur par points
	//!
	Triangle(const Couleur::couleurs &, double a, double b, double c, double d, double e, double f);
	//!
	//! \brief Destructeur
	//!
	virtual ~Triangle();

	Point getBase1() const;
	Point getBase2() const;
	Point getSommet() const;

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
	virtual void accept(Visitor * v) ;
};

#endif
