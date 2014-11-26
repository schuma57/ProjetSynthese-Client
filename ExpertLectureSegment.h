#ifndef EXPERTLECTURESEGMENT
#define EXPERTLECTURESEGMENT
#pragma once

#include "ExpertLecture.h"

class ExpertLectureSegment : public ExpertLecture
{
public:
	ExpertLectureSegment();
	virtual ~ExpertLectureSegment();

	virtual FormeGeometrique* expertAction(const string & forme) const;
};

#endif
