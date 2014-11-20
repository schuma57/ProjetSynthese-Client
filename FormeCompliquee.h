#ifndef FORMECOMPLIQUEE
#define FORMECOMPLIQUEE
#pragma once

#include <vector>
#include "FormeGeometrique.h"
using namespace std;

class FormeCompliquee : public FormeGeometrique
{
private:
	vector<FormeGeometrique*> listeFormes;

public:
	FormeCompliquee(const string &);
	virtual ~FormeCompliquee();

	void ajouterForme(FormeGeometrique*);
	vector<FormeGeometrique*> getListeFormes() const;
	virtual double calculAire() const;
	virtual FormeGeometrique* translation(int l, int h);
	virtual FormeGeometrique* homothetie(int x, int y, double coeff);
	virtual FormeGeometrique* rotation(int x, int y, double angle);

	virtual operator string() const;
	virtual void accept(Visitor * v);
};

#endif
