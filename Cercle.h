#ifndef CERCLE
#define CERCLE
#pragma once

#include "FormeSimple.h"
#include "Point.h"

class Cercle : public FormeSimple
{
private:
	Point centre;
	int rayon;

public:
	Cercle(const string &, const Point &, int r);
	Cercle(const string &, int x, int y, int r);
	virtual ~Cercle();

	virtual operator string() const;
	double calculAire() const;
	virtual void accept(Visitor * v);
};

#endif
