#include <string>
#include <vector>
#include "Erreur.h"
using namespace std;

#include "Triangle.h"
#include "VisitorTCP.h"

int main()
{
	//Triangle triangle("tri", 0, 0, 0, 100, 100, 100);
	//Segment segment("seg", 50, 70, 50, 270);
	//Cercle cercle("cer", 140, 100, 40);
	

	vector<Point> points;
	points.push_back(Point(50,50));
	points.push_back(Point(450, 50));
	points.push_back(Point(450, 300));
	points.push_back(Point(50, 300));

	Polygone polygone("poly", points);


	//FormeCompliquee forme("forme");
	//forme.ajouterForme(&triangle);
	//forme.ajouterForme(&segment);
	//forme.ajouterForme(&cercle);

	VisitorTCP v;

	//cout << "aire = " << triangle.calculAire() << endl;
	//cout << "" << string(triangle) << endl;

	//triangle.accept(&v);
	//segment.accept(&v);
	//cercle.accept(&v);
	polygone.accept(&v);

	//triangle.translation(50, 10)->accept(&v);
	//triangle.homothetie(0,0,2)->accept(&v);
	//cercle.translation(30, 30)->accept(&v);
	//cercle.homothetie(200, 200, 1.5)->accept(&v);
	//segment.translation(30, 30)->accept(&v);
	//segment.homothetie(0, 0, 2)->accept(&v);
	//segment.rotation(50, 70, -40)->accept(&v);

	polygone.translation(30, 10)->accept(&v);
	polygone.homothetie(0, 0, 1.5)->accept(&v);
	polygone.rotation(450,50, -45)->accept(&v);

	//forme.accept(&v);
	//forme.translation(20,20)->accept(&v);
	//forme.homothetie(0,0,2)->accept(&v);
	//forme.rotation(0,0,-90)->accept(&v);

	return 0;
}
