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

vector<string> ExpertLecture::explode(const string & str, char delimiter) const
{
	istringstream split(str);
	vector<string> tokens;
	for (string each; getline(split, each, delimiter); tokens.push_back(each));

	return tokens;
}
