#pragma once

#include "LectureProcess.h"

class ExpertLectureFacade
{
private:
	LectureProcess process;
	void creerProcess();

public:
	ExpertLectureFacade();
	virtual ~ExpertLectureFacade();

	void ajoutRegle(ExpertLecture* expert);
	FormeGeometrique* recevoirForme(const string & forme) const;
};

