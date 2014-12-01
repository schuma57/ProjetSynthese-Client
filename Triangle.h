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
	Triangle(const Couleur::couleurs &, int a, int b, int c, int d, int e, int f);
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
	virtual void accept(Visitor * v) ;
};

#endif
