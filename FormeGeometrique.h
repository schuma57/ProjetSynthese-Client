#ifndef FORMEGEOMETRIQUE
#define FORMEGEOMETRIQUE
#pragma once

//!
//! \file FormeGeometrique.h
//! \brief Classe mere de toutes les formes geometriques
//! \author Florian
//!

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include "Couleur.h"
using namespace std;

class Visitor;

//!
//!	\class FormeGeometrique
//! Cette classe est abstract
//!
class FormeGeometrique
{
private:
	Couleur::couleurs couleur;
	//!
	//! true si le forme n'est pas composante d'une forme compliquee
	//! false sinon
	//!
	bool libre;

public:
	//!
	//! \brief Constructeur
	//! \param color : couleur de la forme geometrique
	//!
	FormeGeometrique(const Couleur::couleurs & color);
	//!
	//! \brief Destructeur
	//!
	virtual ~FormeGeometrique();

	Couleur::couleurs getCouleur() const;
	string getCouleurToString() const;
	void setCouleur(const Couleur::couleurs & color);
	bool isLibre() const;
	void setLibre(bool b);

	//!
	//! virtuelle pure
	//! \return l'aire de la forme géométrique 
	//!
	virtual double calculAire() const = 0;
	//!
	//! \brief Translation de la forme
	//! virtuelle pure
	//! \param l : distance en x de la translation
	//! \param h : distance en y de la translation
	//! \return l'image par la translation de la forme appelante 
	//!
	virtual FormeGeometrique* translation(int l, int h) = 0;
	//!
	//! \brief Homothetie de la forme
	//! virtuelle pure
	//! \param x : x du centre de homothetie
	//! \param y : y du center de homothetie
	//! \param coeff : coefficient de l'homothetie
	//! \return l'image par l' homothetie de la forme appelante 
	//!
	virtual FormeGeometrique* homothetie(int x, int y, double coeff) = 0;
	//!
	//! \brief Rotation de la forme
	//! virtuelle pure
	//! \param x : x du centre de rotation
	//! \param y : y du center de rotation
	//! \param angle : angle de la rotation en degres
	//! \return l'image par la rotation de la forme appelante 
	//!
	virtual FormeGeometrique* rotation(int x, int y, double angle) = 0;

	//!
	//! \brief Caster l'objet en string
	//! virtuelle pure
	//!
	virtual operator string() const = 0;
	//!
	//! design pattern Visitor
	//! \param v : pointeur d'objet Visitor
	//!
	virtual void accept(Visitor * v) = 0;
	//!
	//! \brief sauvegarder la forme appelante dans un fichier
	//! \param nom_fichier : string
	//!
	virtual void sauvegarde(const string & nom_fichier) const;
	//!
	//! \brief fonction static
	//! \param nom_fichier : string
	//! \return un vector de FormeGeometrique *
	//! utilise le design pattern Chain of responsibility, voir classe ExpertLecture
	//!
	static vector<FormeGeometrique*> charger(const string & nom_fichier);
};

#endif
