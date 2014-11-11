#include <string>
#include "Erreur.h"
using namespace std;

#include "Triangle.h"
#include "VisitorTCP.h"

int main()
{
	Triangle triangle("tri", 0, 0, 0, 10, 10, 10 );
	VisitorTCP v;

	cout << "aire = " << triangle.calculAire() << endl;
	cout << "" << string(triangle) << endl;

	triangle.accept(&v);

	return 0;
}