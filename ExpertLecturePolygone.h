#ifndef EXPERTLECTUREPOLYGONE
#define EXPERTLECTUREPOLYGONE
#pragma once

#include "ExpertLecture.h"

class ExpertLecturePolygone : public ExpertLecture
{
public:
	ExpertLecturePolygone();
	virtual ~ExpertLecturePolygone();

	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
