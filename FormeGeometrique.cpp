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

void FormeGeometrique::dessiner() const
{
	try
	{
		int r;
		WSADATA WSAData;
		r = WSAStartup(MAKEWORD(2, 0), &WSAData);
		if (r)
			throw Erreur("L'initialisation a echoue");

		cout << "client vers le serveur de dessin" << endl;
		cout << "initialisation effectuée" << endl;

		SOCKET sock;

		int familleAdresses = AF_INET;         // IPv4
		int typeSocket = SOCK_STREAM;          // mode connecté TCP
		int protocole = IPPROTO_TCP;

		sock = socket(familleAdresses, typeSocket, protocole);

		if (sock == INVALID_SOCKET)
		{
			ostringstream oss;
			oss << "la création du socket a echoue : code d'erreur = " << WSAGetLastError() << endl; // pour les valeurs renvoyées par WSAGetLastError()
			throw Erreur(oss.str().c_str());
		}

		cout << "socket cree" << endl;

		char adresseServeur[L];
		short portServeur;

		cout << "tapez l'adresse IP du serveur de dessin : " << endl;
		cin >> adresseServeur;
		cout << "tapez le port du serveur du serveur de dessin : " << endl;

		cin >> portServeur;

		SOCKADDR_IN sockaddr; // informations concernant le serveur avec lequel on va communiquer

		sockaddr.sin_family = AF_INET;
		sockaddr.sin_addr.s_addr = inet_addr(adresseServeur);   // inet_addr() convertit de l'ASCII en entier
		sockaddr.sin_port = htons(portServeur);                 //htons() assure que le port est bien inscrit dans le format du réseau (little-endian ou big-endian)

		//-------------- connexion du client au serveur ---------------------------------------

		r = connect(sock, (SOCKADDR *)&sockaddr, sizeof(sockaddr));     // renvoie une valeur non nulle en cas d'échec.
		// Le code d'erreur peut être obtenu par un appel à WSAGetLastError()

		if (r == SOCKET_ERROR)
			throw Erreur("La connexion a échoué");

		cout << "Connexion au serveur de dessin reussie" << endl;

		//bool continuer;
		//do
		//{
			//char requete[L];
			//cout << "Tapez la chaine a mettre en majuscule ou tapez \"quitter\" : " << endl;
			//cin >> requete;

			string forme = string(* this);
			forme += "\r\n";
			char* chaineConvertie = (char*)forme.c_str();

			//continuer = strcmp(requete, "quitter") != 0;
			//if (continuer)
			//{
				int tailleChaine = strlen(chaineConvertie);

				r = send(sock, chaineConvertie, tailleChaine, 0);         //------------------ envoi de la requête au serveur -----------------
				if (r == SOCKET_ERROR)
					throw Erreur("échec de l'envoi de la requête");

				/*
				char reponse[L];
				r = recv(sock, reponse, l, 0);             //----------- réception de la réponse du serveur ------------------------
				// reçoit au plus l octets
				// en cas de succès, r contient le nombre d'octets reçus
				if (r == SOCKET_ERROR)
					throw Erreur("La réception de la réponse a échoué");

				char * p = strchr(reponse, '\n');
				*p = '\0';

				cout << reponse << endl;
				*/
			//}
		//} while (continuer);

		r = shutdown(sock, SD_BOTH);

		if (r == SOCKET_ERROR)
			throw Erreur("la coupure de connexion a échoué");

		r = closesocket(sock);
		if (r)
			throw Erreur("La fermeture du socket a échoué");
		WSACleanup();
		cout << "Arret normal du client" << endl;
	}
	catch (Erreur erreur)
	{
		cerr << erreur << endl;
	}
}
