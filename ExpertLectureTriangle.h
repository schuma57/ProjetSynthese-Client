#ifndef EXPERTLECTURETRIANGLE
#define EXPERTLECTURETRIANGLE
#pragma once

//!
//! \file ExpertLectureTriangle.h
//! \author Florian
//!

#include "ExpertLecture.h"

//!
//! \class ExpertLectureTriangle
//! \brief herite de ExpertLecture
//!
class ExpertLectureTriangle : public ExpertLecture
{
public:
	//!
	//! \brief Constructeur
	//!
	ExpertLectureTriangle();
	//!
	//! \brief Destructeur
	//!
	virtual ~ExpertLectureTriangle();

	//!
	//! \brief override
	//!
	virtual FormeGeometrique* expertAction(const string & forme) const;
};

#endif
