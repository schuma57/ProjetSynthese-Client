#ifndef EXPERTLECTURETRIANGLE
#define EXPERTLECTURETRIANGLE
#pragma once

#include "ExpertLecture.h"

class ExpertLectureTriangle : public ExpertLecture
{
public:
	ExpertLectureTriangle();
	virtual ~ExpertLectureTriangle();

	virtual FormeGeometrique* expertAction(const string & forme) const;
};

#endif
