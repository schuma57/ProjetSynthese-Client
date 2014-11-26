#include <sstream>
#include <fstream>
#include <winsock2.h>
#include "Erreur.h"
#pragma comment(lib, "ws2_32.lib")
#include "FormeGeometrique.h"
#include "ExpertLectureFacade.h"

#define L 200

FormeGeometrique::FormeGeometrique(const Couleur::couleurs & color) : couleur(color), libre(true)
{
}

FormeGeometrique::~FormeGeometrique()
{
}

Couleur::couleurs FormeGeometrique::getCouleur() const
{
	return this->couleur;
}

string FormeGeometrique::getCouleurToString() const
{
	return Couleur::getCouleur(this->couleur);
}

void FormeGeometrique::setCouleur(const Couleur::couleurs & color)
{
	couleur = color;
}

bool FormeGeometrique::isLibre() const
{
	return libre;
}

void FormeGeometrique::setLibre(bool b)
{
	libre = b;
}


void FormeGeometrique::sauvegarde(const string & nom_fichier) const
{
	ofstream fichier("sauvegarde/"+nom_fichier, ios::out | ios::app);  //ecriture

	if (fichier)
	{
		cout << "sauvegarde de : "<< string(*this) << endl;
		fichier << string(*this) << endl ;
		fichier.close();
	}
	else
		cerr << "Erreur à l'ouverture !" << endl;
}

vector<FormeGeometrique*> FormeGeometrique::charger(const string & nom_fichier)
{
	vector<FormeGeometrique*> listeFormes;
	ifstream fichier("sauvegarde/"+nom_fichier, ios::in);  // lecture

	if (fichier)
	{
		string forme;
		ExpertLectureFacade p;

		while( getline(fichier, forme))
			listeFormes.push_back(p.recevoirForme(forme));

		fichier.close();
		return listeFormes;
	}
	else
	{
		cerr << "Impossible d'ouvrir le fichier !" << endl;
		return listeFormes;
	}
}
