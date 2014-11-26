#ifndef EXPERTLECTURECERCLE
#define EXPERTLECTURECERCLE
#pragma once

#include "ExpertLecture.h"

class ExpertLectureCercle : public ExpertLecture
{
public:
	ExpertLectureCercle();
	virtual ~ExpertLectureCercle();

	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
