#ifndef FORMEGEOMETRIQUE
#define FORMEGEOMETRIQUE
#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "Couleur.h"
using namespace std;

class Visitor;

class FormeGeometrique
{
private:
	Couleur::couleurs couleur;
	bool libre;

public:
	FormeGeometrique(const Couleur::couleurs & color);
	virtual ~FormeGeometrique();

	Couleur::couleurs getCouleur() const;
	string getCouleurToString() const;
	void setCouleur(const Couleur::couleurs & color);
	bool isLibre() const;
	void setLibre(bool b);

	virtual double calculAire() const = 0;
	virtual FormeGeometrique* translation(int l, int h) = 0;
	virtual FormeGeometrique* homothetie(int x, int y, double coeff) = 0;
	virtual FormeGeometrique* rotation(int x, int y, double angle) = 0;

	virtual operator string() const = 0;
	virtual void accept(Visitor * v) = 0;
	virtual void sauvegarde(const string & nom_fichier) const;
	static vector<FormeGeometrique*> charger(const string & nom_fichier);
};

#endif
