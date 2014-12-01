#ifndef VISITORTCP
#define VISITORTCP
#pragma once

//!
//! \file VisitorTCP.h
//! \author Yacine
//!

#include "Visitor.h"

//!
//! \class VisitorTCP
//! \brief herite de la classe Visitor
//!
class VisitorTCP : public Visitor
{
public:
	//!
	//! \brief Constructeur
	//!
	VisitorTCP();
	//!
	//! \brief Destructeur
	//!
	virtual ~VisitorTCP();

	//!
	//! \brief override
	//!
	virtual void visiteSegment(const Segment &) const;
	//!
	//! \brief override
	//!
	virtual void visiteTriangle(const Triangle &) const;
	//!
	//! \brief override
	//!
	virtual void visiteCercle(const Cercle &) const;
	//!
	//! \brief override
	//!
	virtual void visitePolygone(const Polygone &) const;
	//!
	//! \brief override
	//! revient à visiter toutes les formes qui composent une forme compliquee
	//! appel recursif
	//!
	virtual void visiteFormeCompliquee(const FormeCompliquee &) const;
};

#endif
