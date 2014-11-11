#ifndef ERREUR_H
#define ERREUR_H

#include <string>
#include <iostream>
using namespace std;

class Erreur
{
public:
	const static int LONGUEURMESSAGE = 100;
	char message[1 + LONGUEURMESSAGE];
	Erreur();
	Erreur(const char * messageErreur);

	operator string() const;
};

ostream & operator << (ostream & os, const Erreur & erreur);

#endif


