#include <sstream>
#include "ExpertLecture.h"


ExpertLecture::~ExpertLecture()
{
	suivant = NULL;
	delete suivant;
}


void ExpertLecture::setSuivant(ExpertLecture* expert)
{
	suivant = expert;
}

vector<string> ExpertLecture::explode(const string & str) const
{
	istringstream split(str);
	vector<string> tokens;
	for (string each; getline(split, each, ' '); tokens.push_back(each));

	return tokens;
}
