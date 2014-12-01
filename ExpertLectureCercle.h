#ifndef EXPERTLECTURECERCLE
#define EXPERTLECTURECERCLE
#pragma once

//!
//! \file ExpertLectureCercle.h
//! \author Florian
//!

#include "ExpertLecture.h"

//!
//! \class ExpertLectureCercle
//! \brief herite de ExpertLecture
//!
class ExpertLectureCercle : public ExpertLecture
{
public:
	//!
	//! \brief Constructeur
	//!
	ExpertLectureCercle();
	//!
	//! \brief Destructeur
	//!
	virtual ~ExpertLectureCercle();

	//!
	//! \brief override
	//!
	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
