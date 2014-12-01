#ifndef VISITOR
#define VISITOR
#pragma once

//!
//! \brief class mere des visiteurs
//! \file Visitor.h
//! \author Yacine
//!

#include "Segment.h"
#include "Triangle.h"
#include "Cercle.h"
#include "Polygone.h"
#include "FormeCompliquee.h"

//!
//! \class Visitor
//! \brief design pattern Visitor
//! classe abstract
//!
class Visitor
{
protected:
	//!
	//! \brief Constructeur
	//!
	Visitor();

public:
	//!
	//! \brief Destructeur
	//!
	virtual ~Visitor();

	//!
	//! \brief visite un segment
	//! \param segment
	//!
	virtual void visiteSegment(const Segment &) const = 0;
	//!
	//! \brief visite un triangle
	//! \param triangle
	//!
	virtual void visiteTriangle(const Triangle &) const = 0;
	//!
	//! \brief visite un cercle
	//! \param cercle
	//!
	virtual void visiteCercle(const Cercle &) const = 0;
	//!
	//! \brief visite un polygone
	//! \param polygone
	//!
	virtual void visitePolygone(const Polygone &) const = 0;
	//!
	//! \brief visite une forme compliquee
	//! \param formeCompliquee
	//!
	virtual void visiteFormeCompliquee(const FormeCompliquee &) const = 0;
};

#endif
