#include <sstream>
#include "ExpertLectureFormeCompliquee.h"
#include "FormeCompliquee.h"
#include "ExpertLectureFacade.h"


ExpertLectureFormeCompliquee::ExpertLectureFormeCompliquee()
{
}

ExpertLectureFormeCompliquee::~ExpertLectureFormeCompliquee()
{
}

FormeGeometrique* ExpertLectureFormeCompliquee::expertAction(const string & forme) const
{
	ExpertLectureFacade expert;
	istringstream split(forme);

	vector<string> masterTab;
	for (string each; getline(split, each, '/'); masterTab.push_back(each));

	vector<string> tabStrings;
	for (string each; getline(split, each, '/'); tabStrings.push_back(each));

	if ( tabStrings[0] != "Comp")
	{
		cout << "ce n'est pas une forme compliquee" << endl;
		return NULL;
	}
	else
	{
		cout << "c'est une forme compliquee" << endl;
		FormeCompliquee* fComp = new FormeCompliquee(Couleur::getCouleurFromString(tabStrings[1]));
		
		//string temp;
		size_t i = 2;
		while (i < tabStrings.size())
		{
			fComp->ajouterForme(expert.recevoirForme(tabStrings[i]));
			i++;
		}

		return fComp;
	}
}