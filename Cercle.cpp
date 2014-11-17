#include "Cercle.h"
#include "Visitor.h"


Cercle::Cercle(const string & s, const Point & p, int r) : FormeSimple(s), centre(p), rayon(r)
{
}

Cercle::Cercle(const string & s, int x, int y, int r) : FormeSimple(s), centre(x, y), rayon(r)
{
}

Cercle::~Cercle()
{
}

double Cercle::calculAire() const
{
	return 3,14 * rayon * rayon;
}

FormeGeometrique* Cercle::translation(int l, int h)
{
	return new Cercle(getNom(), centre.translation(l,h), rayon);
}

FormeGeometrique* Cercle::homothetie(int x, int y, double coeff)
{
	return new Cercle(getNom(), centre.homothetie(x,y,coeff), rayon*coeff);
}


void Cercle::accept(Visitor * v)
{
	v->visiteCercle(*this);
}

Cercle::operator string() const
{
	string str = "Cer " + to_string(centre.getX()) + " " + to_string(centre.getY()) + " " + to_string(rayon);
	return str;
}
