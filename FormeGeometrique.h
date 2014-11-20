#ifndef FORMEGEOMETRIQUE
#define FORMEGEOMETRIQUE
#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Visitor;

class FormeGeometrique
{
private:
	string nom;

public:
	FormeGeometrique(const string & nom);
	virtual ~FormeGeometrique();

	string getNom() const;
	void setNom(const string & n);

	virtual double calculAire() const = 0;
	virtual FormeGeometrique* translation(int l, int h) = 0;
	virtual FormeGeometrique* homothetie(int x, int y, double coeff) = 0;
	virtual FormeGeometrique* rotation(int x, int y, double angle) = 0;

	virtual operator string() const = 0;
	virtual void accept(Visitor * v) = 0;
};

#endif
