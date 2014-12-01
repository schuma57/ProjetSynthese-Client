#ifndef EXPERTLECTURE
#define EXPERTLECTURE
#pragma once

//!
//! \file ExpertLecture.h
//! \author Florian
//!

#include <string>
#include <iostream>
#include <vector>
#include "FormeGeometrique.h"
using namespace std;

//!
//! \class ExpertLecture
//! \brief design pattern Chain of responsibility
//! classe mere de la chaine de responsabilite, classe abstract
//!
class ExpertLecture
{
protected:
	ExpertLecture* suivant = NULL;
	//!
	//! \brief Constructeur
	//!
	ExpertLecture(){}

public:
	//!
	//! \brief Destructeur
	//!
	virtual ~ExpertLecture();

	//!
	//! \param expert
	//!
	void setSuivant(ExpertLecture* expert);
	//!
	//! \brief reponse de l'expert
	//! \param forme
	//! \return un FormeGeometrique *
	//!
	virtual FormeGeometrique* expertAction(const string & forme) const = 0;

	//!
	//! \brief explode une string vers un vector de string
	//! suivant un delimiteur passe en parametre
	//! param str : la string a convertir
	//! param delimiteur
	//! \return un vector de string
	//!
	vector<string> explode(const string & str, char delimiteur) const;
};

#endif
