#include "ExpertLectureCercle.h"
#include "Cercle.h"


ExpertLectureCercle::ExpertLectureCercle()
{
}

ExpertLectureCercle::~ExpertLectureCercle()
{
}


FormeGeometrique* ExpertLectureCercle::expertAction(const string & forme) const
{
	vector<string> tabStrings = this->explode(forme);

	if (tabStrings[0] != "Cer")
	{
		cout << "ce n'est pas un cercle" << endl;
		return suivant->expertAction(forme);
	}
	else
	{
		cout << "c'est un cercle ecrit dans le fichier !" << endl;
		return new Cercle(Couleur::getCouleurFromString(tabStrings[1]) ,
			stoi(tabStrings[2]), stoi(tabStrings[3]), stoi(tabStrings[4]) );
	}
}
