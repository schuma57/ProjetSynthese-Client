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

	virtual operator string() const = 0;
	virtual double calculAire() const = 0;
	virtual void dessiner() const;
	virtual void accept(Visitor * v) = 0;
};

#endif
