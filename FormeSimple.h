#ifndef FORMESIMPLE
#define FORMESIMPLE
#pragma once

//!
//! \file FormeSimple.h
//! \author Yacine
//!

#include "FormeGeometrique.h"

//!
//! \class FormeSimple
//! \brief herite de FormeGeometrique
//! classe abstract
//!
class FormeSimple : public FormeGeometrique
{
public:
	FormeSimple(const Couleur::couleurs & c);
	virtual ~FormeSimple();

	//!
	//! \brief virtuelle pure
	//!
	virtual double calculAire() const = 0;
	//!
	//! \brief virtuelle pure
	//!
	virtual FormeGeometrique* translation(int l, int h) = 0;
	//!
	//! \brief virtuelle pure
	//!
	virtual FormeGeometrique* homothetie(int x, int y, double coeff) = 0;
	//!
	//! \brief virtuelle pure
	//!
	virtual FormeGeometrique* rotation(int x, int y, double angle) = 0;

	virtual operator string() const = 0;
	//!
	//! design pattern Visitor
	//! \brief virtuelle pure
	//!
	virtual void accept(Visitor * v) = 0;
};

#endif
