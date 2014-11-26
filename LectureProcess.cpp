#include "LectureProcess.h"


LectureProcess::LectureProcess()
{
}

LectureProcess::~LectureProcess()
{
}

void LectureProcess::addExpert(ExpertLecture* expert)
{
	if (premier == NULL)
		premier = expert;
	else
		prevExpert->setSuivant(expert);

	prevExpert = expert;
}

FormeGeometrique* LectureProcess::expertAction(const string & forme) const
{
	return premier->expertAction(forme);
}
