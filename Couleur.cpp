#include <map>
#include "Couleur.h"


string Couleur::tableCouleurs[] = { "BLACK", "BLUE", "RED", "GREEN", "YELLOW", "CYAN" };

map<string, Couleur::couleurs> dico = {
		{ "BLACK", Couleur::BLACK }, { "BLUE", Couleur::BLUE }, 
		{ "RED", Couleur::RED }, { "GREEN", Couleur::GREEN },
		{ "YELLOW", Couleur::YELLOW }, {"CYAN", Couleur::CYAN}
};

string Couleur::getCouleur(const int num)
{
	return tableCouleurs[num];
}

Couleur::couleurs Couleur::getCouleurFromString(const string & color)
{
	map< string, Couleur::couleurs >::iterator it = dico.find(color);
		if (it != dico.end())
			return(it->second);

		return Couleur::BLACK;
}
