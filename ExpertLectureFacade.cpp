#include "ExpertLectureFacade.h"
#include "ExpertLectureSegment.h"
#include "ExpertLectureTriangle.h"
#include "ExpertLectureCercle.h"
#include "ExpertLecturePolygone.h"
#include "ExpertLectureFormeCompliquee.h"


ExpertLectureFacade::ExpertLectureFacade()
{
	creerProcess();
}

ExpertLectureFacade::~ExpertLectureFacade()
{
}


void ExpertLectureFacade::creerProcess()
{
	process.addExpert(new ExpertLectureTriangle );
	process.addExpert(new ExpertLectureSegment );
	process.addExpert(new ExpertLectureCercle );
	process.addExpert(new ExpertLecturePolygone );
	process.addExpert(new ExpertLectureFormeCompliquee );
}

void ExpertLectureFacade::ajoutRegle(ExpertLecture* expert)
{
	process.addExpert(expert);
}

FormeGeometrique* ExpertLectureFacade::recevoirForme(const string & forme) const
{
	return process.expertAction(forme);
}
