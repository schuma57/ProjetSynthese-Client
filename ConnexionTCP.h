#ifndef CONNEXIONTCP
#define CONNEXIONTCP
#pragma once

#include <iostream>
#include <sstream>
#include <WinSock2.h>
#include "Erreur.h"
using namespace std;

#define L 200

class ConnexionTCP
{
private:
	WSADATA wsaData;
	SOCKADDR_IN sockaddr;
	static SOCKET sock;
	char adresseServeur[L];
	short portServeur;

	ConnexionTCP();
	static ConnexionTCP* instanceUnique;

public:
	virtual ~ConnexionTCP();
	static ConnexionTCP* getConnexionTCP();

	void envoyerForme(string forme);
};

#endif
