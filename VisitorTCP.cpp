#include "VisitorTCP.h"


VisitorTCP::VisitorTCP()
{
}

VisitorTCP::~VisitorTCP()
{
}

void VisitorTCP::visiteSegment(const Segment & s) const
{
	s.dessiner();
}

void VisitorTCP::visiteTriangle(const Triangle & t) const
{
	t.dessiner();
}

void VisitorTCP::visiteCercle(const Cercle & c) const
{
	c.dessiner();
}
