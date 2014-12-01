#ifndef FORMECOMPLIQUEE
#define FORMECOMPLIQUEE
#pragma once

//!
//! \file FormeCompliquee.h
//! \author Florian
//!

#include <vector>
#include "FormeGeometrique.h"
using namespace std;

//!
//! \class FormeCompliquee
//! \brief herite de FormeGeometrique
//! une forme compliquee est composee d'une ou plusieurs formes geometriques
//!
class FormeCompliquee : public FormeGeometrique
{
private:
	//!
	//! \brief vector de FormeGeometrique *
	//!
	vector<FormeGeometrique*> listeFormes;

public:
	//!
	//! \brief Constructeur
	//! \param c : Couleur::couleurs
	//!
	FormeCompliquee(const Couleur::couleurs & c);
	//!
	//! \brief Destructeur
	//!
	virtual ~FormeCompliquee();

	//!
	//! \brief ajouter une forme geometrique
	//! \param f : FormeGeometrique *
	//!
	void ajouterForme(FormeGeometrique* f);
	//!
	//! \brief retourne la donnee membre listeFomres
	//! \return vector de FormeGeometrique *
	//!
	vector<FormeGeometrique*> getListeFormes() const;
	//!
	//! \return l'aire de la fomre geometrique 
	//!
	virtual double calculAire() const;
	//!
	//! \brief Translation de la forme
	//! \param l : distance en x de la translation
	//! \param h : distance en y de la translation
	//! \return l'image par la translation de la forme appelante 
	//!
	virtual FormeGeometrique* translation(int l, int h);
	//!
	//! \brief Homothetie de la forme
	//! \param x : x du centre de homothetie
	//! \param y : y du center de homothetie
	//! \param coeff : coefficient de l'homothetie
	//! \return l'image par l' homothetie de la forme appelante 
	//!
	virtual FormeGeometrique* homothetie(int x, int y, double coeff);
	//!
	//! \brief Rotation de la forme
	//! \param x : x du centre de rotation
	//! \param y : y du center de rotation
	//! \param angle : angle de la rotation en degres
	//! \return l'image par la rotation de la forme appelante 
	//!
	virtual FormeGeometrique* rotation(int x, int y, double angle);

	//!
	//! \brief Caster l'objet en string
	//!
	virtual operator string() const;
	//!
	//! design pattern Visitor
	//! \param v : pointeur d'objet Visitor
	//!
	virtual void accept(Visitor * v);
};

#endif
