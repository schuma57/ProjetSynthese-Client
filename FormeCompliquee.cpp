#include "FormeCompliquee.h"
#include "VisitorTCP.h"


FormeCompliquee::FormeCompliquee(const string & s) : FormeGeometrique(s)
{
}

FormeCompliquee::~FormeCompliquee()
{
}


void FormeCompliquee::ajouterForme(FormeGeometrique* f)
{
	if (f != NULL)
		listeFormes.push_back(f);
}

vector<FormeGeometrique*> FormeCompliquee::getListeFormes() const
{
	return listeFormes;
}

double FormeCompliquee::calculAire() const
{
	return 0;
}

FormeGeometrique* FormeCompliquee::translation(int l, int h)
{
	FormeCompliquee* resultat = new FormeCompliquee(getNom());
	for (auto forme : this->getListeFormes())
		resultat->ajouterForme(forme->translation(l,h));
	return resultat;
}

FormeGeometrique* FormeCompliquee::homothetie(int x, int y, double coeff)
{
	FormeCompliquee* resultat = new FormeCompliquee(getNom());
	for (auto forme : this->getListeFormes())
		resultat->ajouterForme(forme->homothetie(x, y, coeff));
	return resultat;
}

FormeGeometrique* FormeCompliquee::rotation(int x, int y, double angle)
{
	FormeCompliquee* resultat = new FormeCompliquee(getNom());
	for (auto forme : this->getListeFormes())
		resultat->ajouterForme(forme->rotation(x, y, angle));
	return resultat;
}


FormeCompliquee::operator string() const
{
	string str;
	return str;
}

void FormeCompliquee::accept(Visitor * v)
{
	v->visiteFormeCompliquee(*this);
}
