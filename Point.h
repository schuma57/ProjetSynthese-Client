#ifndef POINT
#define POINT
#pragma once

//!
//! \file Point.h
//! \autor Yacine
//!

//!
//! \class Point
//! \brief definie un point sur le repere
//!
class Point
{
private:
	double x;
	double y;

public:
	//!
	//! \brief Constructeur
	//! \param a : coordonne en x
	//! \param b : coordonne en y
	//!
	Point(double a, double b);
	//!
	//! \brief Destructeur
	//!
	virtual ~Point();

	double getX() const;
	double getY() const;

	//!
	//! \brief Translation du point
	//! \param l : distance en x de la translation
	//! \param h : distance en y de la translation
	//! \return l'image par la translation du point appelant
	//!
	Point translation(double l, double h) const;
	//!
	//! \brief Homothetie du point
	//! \param x : x du centre de homothetie
	//! \param y : y du center de homothetie
	//! \param coeff : coefficient de l'homothetie
	//! \return l'image par l' homothetie du point appelant 
	//!
	Point homothetie(double x, double y, double coeff) const;
	Point rotation(double x, double y, double angle) const;
};

#endif
