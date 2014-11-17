#include <string>
#include "Erreur.h"
using namespace std;

#include "Triangle.h"
#include "VisitorTCP.h"

int main()
{
	//Triangle triangle("tri", 0, 0, 0, 100, 100, 100);
	//Segment segment("seg", 140, 10, 140, 140);
	Cercle cercle("cer", 140, 100, 40);
	
	//Polygone polygone("poly");
	//FormeCompliquee forme("forme");
	//forme.ajouterForme(&triangle);
	//forme.ajouterForme(&segment);
	//forme.ajouterForme(&cercle);

	VisitorTCP v;

	//cout << "aire = " << triangle.calculAire() << endl;
	//cout << "" << string(triangle) << endl;

	//triangle.accept(&v);
	//segment.accept(&v);
	cercle.accept(&v);

	//triangle.translation(50, 10)->accept(&v);
	//triangle.homothetie(0,0,2)->accept(&v);
	cercle.translation(30, 30)->accept(&v);
	cercle.homothetie(0, 0, 2)->accept(&v);
	//segment.translation(30, 30)->accept(&v);
	//segment.homothetie(0, 0, 2)->accept(&v);

	//forme.accept(&v);

	return 0;
}
