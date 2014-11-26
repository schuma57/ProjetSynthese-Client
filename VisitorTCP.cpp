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
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(s));
}

void VisitorTCP::visiteTriangle(const Triangle & t) const
{
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(t));
}

void VisitorTCP::visiteCercle(const Cercle & c) const
{
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(c));
}

void VisitorTCP::visitePolygone(const Polygone & p) const
{
	ConnexionTCP::getConnexionTCP()->envoyerForme(string(p));
}

void VisitorTCP::visiteFormeCompliquee(const FormeCompliquee & compliquee) const
{
	VisitorTCP v;
	for (auto forme : compliquee.getListeFormes())
		forme->accept(&v);
		//ConnexionTCP::getConnexionTCP()->envoyerForme( string( *forme ) );
}
