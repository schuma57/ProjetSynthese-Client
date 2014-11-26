#ifndef EXPERTLECTUREFORMECOMPLIQUEE
#define EXPERTLECTUREFORMECOMPLIQUEE
#pragma once

#include "ExpertLecture.h"

class ExpertLectureFormeCompliquee : public ExpertLecture
{
public:
	ExpertLectureFormeCompliquee();
	virtual ~ExpertLectureFormeCompliquee();

	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
