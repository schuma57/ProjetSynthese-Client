#include "FormeCompliquee.h"
#include "VisitorTCP.h"
#include "Erreur.h"


FormeCompliquee::FormeCompliquee(const Couleur::couleurs & c) : FormeGeometrique(c)
{
}

FormeCompliquee::~FormeCompliquee()
{
}


void FormeCompliquee::ajouterForme(FormeGeometrique* f)
{
	if (f != NULL)
	{
		if ( f->isLibre() )
		{
			if (f->getCouleur() != this->getCouleur())
				f->setCouleur(this->getCouleur());
			listeFormes.push_back(f);
			f->setLibre(false);
		}
		else
		{
			cout << "Ajout impossible : La forme est deja utilisee" << endl;
		}
	}
}

vector<FormeGeometrique*> FormeCompliquee::getListeFormes() const
{
	return listeFormes;
}

double FormeCompliquee::calculAire() const
{
	double somme = 0;
	for (auto forme : listeFormes)
		somme += forme->calculAire();
	return somme;
}

FormeGeometrique* FormeCompliquee::translation(int l, int h)
{
	FormeCompliquee* resultat = new FormeCompliquee(getCouleur());
	for (auto forme : this->getListeFormes())
		resultat->ajouterForme(forme->translation(l,h));
	return resultat;
}

FormeGeometrique* FormeCompliquee::homothetie(int x, int y, double coeff)
{
	FormeCompliquee* resultat = new FormeCompliquee(getCouleur());
	for (auto forme : this->getListeFormes())
		resultat->ajouterForme(forme->homothetie(x, y, coeff));
	return resultat;
}

FormeGeometrique* FormeCompliquee::rotation(int x, int y, double angle)
{
	FormeCompliquee* resultat = new FormeCompliquee(getCouleur());
	for (auto forme : this->getListeFormes())
		resultat->ajouterForme(forme->rotation(x, y, angle));
	return resultat;
}


FormeCompliquee::operator string() const
{
	string str = "Comp/" + getCouleurToString();
	for (auto forme : listeFormes)
		str += "/" + string(*forme);
	
	return str;
}

void FormeCompliquee::accept(Visitor * v)
{
	v->visiteFormeCompliquee(*this);
}
