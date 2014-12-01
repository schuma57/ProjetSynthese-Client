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
	int x;
	int y;

public:
	//!
	//! \brief Constructeur
	//! \param a : coordonne en x
	//! \param b : coordonne en y
	//!
	Point(int a, int b);
	//!
	//! \brief Destructeur
	//!
	virtual ~Point();

	int getX() const;
	int getY() const;

	//!
	//! \brief Translation du point
	//! \param l : distance en x de la translation
	//! \param h : distance en y de la translation
	//! \return l'image par la translation du point appelant
	//!
	Point translation(int l, int h) const;
	//!
	//! \brief Homothetie du point
	//! \param x : x du centre de homothetie
	//! \param y : y du center de homothetie
	//! \param coeff : coefficient de l'homothetie
	//! \return l'image par l' homothetie du point appelant 
	//!
	Point homothetie(int x, int y, double coeff) const;
	Point rotation(int x, int y, double angle) const;
};

#endif
