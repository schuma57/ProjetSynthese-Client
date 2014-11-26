#ifndef COULEUR
#define COULEUR
#pragma once

#include <string>
using namespace std;

class Couleur
{
public:
	enum couleurs { BLACK, BLUE, RED, GREEN, YELLOW, CYAN };
	static string getCouleur(const int num);
	static couleurs getCouleurFromString(const string & color);

private:
	static string tableCouleurs[];
	//static map<string, Couleur::couleurs> dico;
};

#endif
