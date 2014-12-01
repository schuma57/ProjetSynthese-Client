#ifndef EXPERTLECTUREFORMECOMPLIQUEE
#define EXPERTLECTUREFORMECOMPLIQUEE
#pragma once

//!
//! \file ExpertLectureFormeCompliquee.h
//! \author Florian
//!

#include "ExpertLecture.h"

//!
//! \class ExpertLectureFormeCompliquee
//! \brief herite de ExpertLecture
//!
class ExpertLectureFormeCompliquee : public ExpertLecture
{
public:
	//!
	//! \brief Constructeur
	//!
	ExpertLectureFormeCompliquee();
	//!
	//! \brief Destructeur
	//!
	virtual ~ExpertLectureFormeCompliquee();

	//!
	//! \brief override
	//!
	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
