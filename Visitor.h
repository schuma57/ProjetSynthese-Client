#ifndef VISITOR
#define VISITOR
#pragma once

#include "Segment.h"
#include "Triangle.h"
#include "Cercle.h"

class Visitor
{
protected:
	Visitor();

public:
	virtual ~Visitor();

	virtual void visiteSegment(const Segment &) const = 0;
	virtual void visiteTriangle(const Triangle &) const = 0;
	virtual void visiteCercle(const Cercle &) const = 0;
};

#endif
