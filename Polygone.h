#ifndef POLYGONE
#define POLYGONE
#pragma once

//!
//! \file Polygone.h
//! \author Yacine
//!

#include <vector>
#include "FormeSimple.h"
#include "Point.h"
using namespace std;

//!
//! \class Polygone
//! \brief herite de FormeSimple
//!
class Polygone : public FormeSimple
{
private:
	//!
	//! liste des points du polygone
	//!
	vector<Point> listePoints;

public:
	//!
	//! \brief Constructeur
	//! un polygone doit etre construit avec ses points
	//! il n'est plus modifiable par la suite (immuable)
	//!
	Polygone(const Couleur::couleurs & c, const vector<Point> & liste);
	//!
	//! \brief Destructeur
	//!
	virtual ~Polygone();

	//!
	//! \return un vector de points
	//!
	vector<Point> getListePoints() const;
	
	//!
	//! \brief override
	//!
	virtual double calculAire() const;
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
