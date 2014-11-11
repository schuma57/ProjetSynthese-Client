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
	return 3, 14 * rayon * rayon;
}

void Cercle::accept(Visitor * v)
{
	v->visiteCercle(*this);
}

Cercle::operator string() const
{
	return string("Cer");
}
