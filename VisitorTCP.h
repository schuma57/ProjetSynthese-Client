#ifndef VISITORTCP
#define VISITORTCP
#pragma once

#include "Visitor.h"

class VisitorTCP : public Visitor
{
public:
	VisitorTCP();
	virtual ~VisitorTCP();

	virtual void visiteSegment(const Segment &) const;
	virtual void visiteTriangle(const Triangle &) const;
	virtual void visiteCercle(const Cercle &) const;
};

#endif
