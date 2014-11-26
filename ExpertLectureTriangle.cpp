#include "ExpertLectureTriangle.h"
#include "Triangle.h"


ExpertLectureTriangle::ExpertLectureTriangle()
{
}

ExpertLectureTriangle::~ExpertLectureTriangle()
{
}


FormeGeometrique* ExpertLectureTriangle::expertAction(const string & forme) const
{
	vector<string> tabStrings = this->explode(forme);

	if (tabStrings[0] != "Tri")
	{
		cout << "ce n'est pas un triangle" << endl;
		return suivant->expertAction(forme);
	}
	else
	{
		cout << "c'est un triangle ecrit dans le fichier !" << endl;
		return new Triangle(Couleur::getCouleurFromString(tabStrings[1]),  
			stoi(tabStrings[2]), stoi(tabStrings[3]),
			stoi(tabStrings[4]), stoi(tabStrings[5]),
			stoi(tabStrings[6]), stoi(tabStrings[7]) );
	}
}
