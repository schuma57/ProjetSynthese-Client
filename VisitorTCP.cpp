#include <vector>
#include "ConnexionTCP.h"
#include "VisitorTCP.h"
using namespace std;

VisitorTCP::VisitorTCP()
{
}

VisitorTCP::~VisitorTCP()
{
}

void VisitorTCP::visiteSegment(const Segment & s) const
{
	//s.dessiner();
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(s));
}

void VisitorTCP::visiteTriangle(const Triangle & t) const
{
	//t.dessiner();
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(t));
}

void VisitorTCP::visiteCercle(const Cercle & c) const
{
	//c.dessiner();
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(c));
}

void VisitorTCP::visitePolygone(const Polygone & p) const
{
	//p.dessiner();
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(p));
}

void VisitorTCP::visiteFormeCompliquee(const FormeCompliquee & compliquee) const
{
	for (auto forme : compliquee.getListeFormes())
		ConnexionTCP::getConnexionTCP()->envoyerForme( string( *forme ) );
}
