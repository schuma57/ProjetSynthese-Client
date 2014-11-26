#include "ExpertLecturePolygone.h"
#include "Polygone.h"


ExpertLecturePolygone::ExpertLecturePolygone()
{
}

ExpertLecturePolygone::~ExpertLecturePolygone()
{
}


FormeGeometrique* ExpertLecturePolygone::expertAction(const string & forme) const
{
	vector<string> tabStrings = this->explode(forme, ' ');

	if (tabStrings[0] != "Poly")
	{
		cout << "ce n'est pas un polygone" << endl;
		return suivant->expertAction(forme);
	}
	else
	{
		cout << "c'est un polygone ecrit dans le fichier !" << endl;

		size_t i = 3;
		vector<Point> listePoints;
		while (i < tabStrings.size())
		{
			listePoints.push_back( Point(stoi(tabStrings[i-1]), stoi(tabStrings[i]) ));
			i += 2;
		}

		return new Polygone(Couleur::getCouleurFromString(tabStrings[1]) , listePoints);
	}
}
