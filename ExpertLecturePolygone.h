#ifndef EXPERTLECTUREPOLYGONE
#define EXPERTLECTUREPOLYGONE
#pragma once

//!
//! \file ExpertLecturePolygone.h
//! \author Florian
//!

#include "ExpertLecture.h"

//!
//! \class ExpertLecturePolygone
//! \brief herite de ExpertLecture
//!
class ExpertLecturePolygone : public ExpertLecture
{
public:
	//!
	//! \brief Constructeur
	//!
	ExpertLecturePolygone();
	//!
	//! \brief Destructeur
	//!
	virtual ~ExpertLecturePolygone();

	//!
	//! \brief override
	//!
	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
