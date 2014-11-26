#include "Cercle.h"
#include "Visitor.h"

#define PI 3.14159265358979323846

Cercle::Cercle(const Couleur::couleurs & c, const Point & p, int r) : FormeSimple(c), centre(p), rayon(r)
{
}

Cercle::Cercle(const Couleur::couleurs & c, int x, int y, int r) : FormeSimple(c), centre(x, y), rayon(r)
{
}

Cercle::~Cercle()
{
}

double Cercle::calculAire() const
{
	return PI * rayon * rayon;
}

FormeGeometrique* Cercle::translation(int l, int h)
{
	return new Cercle(getCouleur(), centre.translation(l,h), rayon);
}

FormeGeometrique* Cercle::homothetie(int x, int y, double coeff)
{
	return new Cercle(getCouleur(), centre.homothetie(x,y,coeff), (int)rayon*coeff);
}

FormeGeometrique* Cercle::rotation(int x, int y, double angle)
{
	return new Cercle(getCouleur(), centre.rotation(x,y,angle), rayon);
}


void Cercle::accept(Visitor * v)
{
	v->visiteCercle(*this);
}

Cercle::operator string() const
{
	string str = "Cer " + getCouleurToString() + " " + to_string(centre.getX()) + " " + to_string(centre.getY()) + " " + to_string(rayon);
	return str;
}
