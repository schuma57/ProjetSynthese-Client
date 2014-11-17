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
	return NULL;
}

FormeGeometrique* FormeCompliquee::homothetie(int x, int y, double coeff)
{
	return NULL;
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
