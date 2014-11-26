#include <string>
#include <vector>
#include "Erreur.h"
using namespace std;

#include "Couleur.h"
#include "Triangle.h"
#include "VisitorTCP.h"

int main()
{
	VisitorTCP v;

	//Triangle triangle(Couleur::GREEN, 0, 0, 0, 100, 100, 100);
	//Segment segment(Couleur::BLUE, 50, 70, 50, 270);
	//Cercle cercle(Couleur::RED, 100, 100, 60);
	
	/*
	vector<Point> points;
	points.push_back(Point(100,30));
	points.push_back(Point(100, 400));
	points.push_back(Point(50, 400));
	points.push_back(Point(50, 450));
	points.push_back(Point(100, 450));
	points.push_back(Point(100, 600));
	points.push_back(Point(150, 600));
	points.push_back(Point(150, 450));
	points.push_back(Point(200, 450));
	points.push_back(Point(200, 400));
	points.push_back(Point(150, 400));
	points.push_back(Point(150, 30));*/

	//Polygone polygone(Couleur::RED, points);


	//FormeCompliquee forme(Couleur::BLUE);
	//FormeCompliquee f2(Couleur::RED);
	//forme.ajouterForme(&triangle);
	//f2.ajouterForme(&triangle);
	//forme.ajouterForme(&segment);
	//forme.ajouterForme(&cercle);

	//cout << "aire = " << polygone.calculAire() << endl;
	//cout << "" << string(triangle) << endl;

	//triangle.accept(&v);
	//segment.accept(&v);
	//cercle.accept(&v);
	//polygone.accept(&v);

	//triangle.translation(300, 0)->accept(&v);
	//triangle.homothetie(0,0,2)->accept(&v);
	//triangle.rotation(0, 0, 90)->accept(&v);
	//cercle.translation(30, 30)->accept(&v);
	///cercle.homothetie(200, 200, 1.5)->accept(&v);
	//cercle.rotation(50, 70, -40)->accept(&v);
	//segment.translation(30, 30)->accept(&v);
	//segment.homothetie(0, 0, 2)->accept(&v);
	//segment.rotation(50, 70, -40)->accept(&v);

	//polygone.translation(30, 10)->accept(&v);
	//polygone.homothetie(0, 0, 1.5)->accept(&v);
	//polygone.rotation(450,50, -45)->accept(&v);

	//forme.accept(&v);
	//forme.translation(20,20)->accept(&v);
	//forme.homothetie(0,0,2)->accept(&v);
	//forme.rotation(0,0,-90)->accept(&v);

	//polygone.translation(30, 10)->homothetie(0, 0, 1.5)->rotation(450, 50, -45)->accept(&v);

	//segment.sauvegarde("test.txt");
	//triangle.sauvegarde("test.txt");
	//polygone.sauvegarde("test.txt");
	//forme.sauvegarde("compliquee.txt");

	vector<FormeGeometrique*> formes = FormeGeometrique::charger("compliquee.txt");

	for (auto f : formes)
		f->accept(&v);

	return 0;
}
