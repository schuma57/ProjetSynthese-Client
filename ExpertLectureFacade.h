#ifndef EXPERTLECTUREFACADE
#define EXPERTLECTUREFACADE
#pragma once

//!
//! \file ExpertLectureFacade.h
//! \brief design pattern Facade
//! \author Florian
//! cette classe permet le chargement d'une forme geometrique depuis un fichier texte
//!

#include "LectureProcess.h"

//!
//! \class ExpertLectureFacade
//! \brief Facade de la classe ExpertLecture
//!
class ExpertLectureFacade
{
private:
	LectureProcess process;
	void creerProcess();

public:
	//!
	//! \brief Constructeur
	//!
	ExpertLectureFacade();
	//!
	//! \brief Destructeur
	//!
	virtual ~ExpertLectureFacade();

	//!
	//! \brief ajouter un expert
	//! \param expert
	//!
	void ajoutRegle(ExpertLecture* expert);
	//!
	//! \brief recois une figure a traiter
	//! \param forme
	//! \return un FormeGeometrique *
	//!
	FormeGeometrique* recevoirForme(const string & forme) const;
};

#endif
