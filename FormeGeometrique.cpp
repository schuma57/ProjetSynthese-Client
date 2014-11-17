#include <sstream>
#include <winsock2.h>
#include "Erreur.h"
#pragma comment(lib, "ws2_32.lib")
#include "FormeGeometrique.h"

#define L 200

FormeGeometrique::FormeGeometrique(const string & nom) : nom(nom)
{
}

FormeGeometrique::~FormeGeometrique()
{
}

string FormeGeometrique::getNom() const
{
	return nom;
}

void FormeGeometrique::setNom(const string & n)
{
	nom = n;
}
