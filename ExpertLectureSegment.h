#ifndef EXPERTLECTURESEGMENT
#define EXPERTLECTURESEGMENT
#pragma once

//!
//! \file ExpertLectureSegment.h
//! \author Florian
//!

#include "ExpertLecture.h"

//!
//! \class ExpertLectureSegment
//! \brief herite de ExpertLecture
//!
class ExpertLectureSegment : public ExpertLecture
{
public:
	//!
	//! \brief Constructeur
	//!
	ExpertLectureSegment();
	//!
	//! \brief Destructeur
	//!
	virtual ~ExpertLectureSegment();

	//!
	//! \brief override
	//!
	virtual FormeGeometrique* expertAction(const string & forme) const;
};

#endif
