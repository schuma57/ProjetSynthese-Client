//!
//! \file ExpertLectureFormeCompliquee.cpp
//!

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

	vector<string> tabStrings = this->explode(forme, '/');

	if ( tabStrings[0] != "Comp")
	{
		cout << "ce n'est pas une forme compliquee" << endl;
		return NULL;
	}
	else
	{
		cout << "c'est une forme compliquee" << endl;
		FormeCompliquee* fComp = new FormeCompliquee(Couleur::getCouleurFromString(tabStrings[1]));
		
		string temp;
		size_t i = 2;
		while (i < tabStrings.size())
		{
			if (tabStrings[i] != "Comp")
			{
				if (tabStrings[i] != "#")
					fComp->ajouterForme(expert.recevoirForme(tabStrings[i]));
				i++;
			}
			else //if == "Comp" => si la forme est compliquee
			{
				size_t j = i;
				while (tabStrings[j] != "#")
					j++;

				while (i <= j)
				{
					temp += tabStrings[i] + "/";
					i++;
				}
				cout << temp << endl;
				fComp->ajouterForme(expert.recevoirForme(temp));
				i ++;
			}
		}

		return fComp;
	}
}