#ifndef POLYGONE
#define POLYGONE
#pragma once

#include <vector>
#include "FormeSimple.h"
#include "Point.h"
using namespace std;

class Polygone : public FormeSimple
{
private:
	vector<Point> listePoints;

public:
	Polygone(const string & s, const vector<Point> & liste);
	virtual ~Polygone();

	vector<Point> getListePoints() const;
	void ajouterPoint(int x, int y);
	
	virtual double calculAire() const;
	virtual FormeGeometrique* translation(int l, int h);
	virtual FormeGeometrique* homothetie(int x, int y, double coeff);
	virtual FormeGeometrique* rotation(int x, int y, double angle);

	virtual operator string() const;
	virtual void accept(Visitor * v);
};

#endif
