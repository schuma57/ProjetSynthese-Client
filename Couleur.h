#ifndef COULEUR
#define COULEUR
#pragma once

//!
//! \file Couleur.h
//! \author Yacine
//!

#include <string>
using namespace std;

//!
//! \class Couleur
//!
class Couleur
{
public:
	//!
	//! \enum couleurs
	//!
	enum couleurs { BLACK, BLUE, RED, GREEN, YELLOW, CYAN };
	//!
	//! \param num
	//! \return une couleur sous fomre de string
	//!
	static string getCouleur(const int num);
	//!
	//! \param color : en string
	//! \return enum couleurs
	//!
	static couleurs getCouleurFromString(const string & color);

private:
	//!
	//! \brief table des couleurs sous formes de string
	//!
	static string tableCouleurs[];
	//static map<string, Couleur::couleurs> dico;
};

#endif
