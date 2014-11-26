#ifndef LECTUREPROCESS
#define LECTUREPROCESS
#pragma once

#include "ExpertLecture.h"

class LectureProcess
{
private:
	ExpertLecture* prevExpert;
	ExpertLecture* premier;

public:
	LectureProcess();
	virtual ~LectureProcess();

	void addExpert(ExpertLecture* expert);
	FormeGeometrique* expertAction(const string & forme) const;
};

#endif
