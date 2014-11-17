#ifndef FORMESIMPLE
#define FORMESIMPLE
#pragma once

#include "FormeGeometrique.h"

class FormeSimple : public FormeGeometrique
{
public:
	FormeSimple(const string & s);
	virtual ~FormeSimple();

	virtual double calculAire() const = 0;
	//virtual void translation(int l, int h) = 0;

	virtual operator string() const = 0;
	virtual void accept(Visitor * v) = 0;
};

#endif
