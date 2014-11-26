#ifndef EXPERTLECTURE
#define EXPERTLECTURE
#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "FormeGeometrique.h"
using namespace std;

class ExpertLecture
{
protected:
	ExpertLecture* suivant = NULL;
	ExpertLecture(){}

public:
	virtual ~ExpertLecture();

	void setSuivant(ExpertLecture* expert);
	virtual FormeGeometrique* expertAction(const string & forme) const = 0;

	vector<string> explode(const string & str) const;
};

#endif
