//!
//! \file ExpertLectureSegment.cpp
//!

#include "ExpertLectureSegment.h"
#include "Segment.h"


ExpertLectureSegment::ExpertLectureSegment()
{
}

ExpertLectureSegment::~ExpertLectureSegment()
{
}

FormeGeometrique* ExpertLectureSegment::expertAction(const string & forme) const
{
	vector<string> tabStrings = this->explode(forme, ' ');

	if (tabStrings[0] != "Seg")
	{
		//cout << "ce n'est pas un segment" << endl;
		return suivant->expertAction(forme);
	}
	else
	{
		return new Segment(Couleur::getCouleurFromString(tabStrings[1]),
			stoi(tabStrings[2]), stoi(tabStrings[3]),
			stoi(tabStrings[4]), stoi(tabStrings[5]) ) ;
	}
}
