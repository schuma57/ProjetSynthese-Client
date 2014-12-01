#ifndef LECTUREPROCESS
#define LECTUREPROCESS
#pragma once

//!
//! \file LectureProcess.h
//! \author Florian
//!

#include "ExpertLecture.h"

//!
//! \class LectureProcess
//!
class LectureProcess
{
private:
	ExpertLecture* prevExpert;
	ExpertLecture* premier;

public:
	//!
	//! \brief Constructeur
	//! construit la chaine de responsabilite
	//! chaine les maillons entre eux
	//!
	LectureProcess();
	//!
	//! \brief Destructeur
	//!
	virtual ~LectureProcess();

	//!
	//! \brief ajoute un expert a la chaine de responsabilite
	//! \param expert
	//!
	void addExpert(ExpertLecture* expert);
	//!
	//! \brief reponse de l'expert
	//! \param forme
	//!
	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
