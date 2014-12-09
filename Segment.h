#ifndef SEGMENT
#define SEGMENT
#pragma once

//!
//! \file Segment.h
//! \author Yacine
//!

#include "FormeSimple.h"
#include "Point.h"

//!
//! \class Segment
//! \brief herite de FormeSimple
//!
class Segment : public FormeSimple
{
private:
	Point point1;
	Point point2;

public:
	//!
	//! \brief Constructeur par points
	//!
	Segment(const Couleur::couleurs &, const Point & p1, const Point & p2);
	//!
	//! \brief Constructeur par coordonnees
	//!
	Segment(const Couleur::couleurs &, double a, double b, double c, double d);
	//!
	//! \brief Destructeur
	//!
	virtual ~Segment();

	Point getPoint1() const;
	void setPoint1(const Point & p);
	Point getPoint2() const;
	void setPoint2(const Point & p);

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
