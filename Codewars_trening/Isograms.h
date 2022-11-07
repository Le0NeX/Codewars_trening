#pragma once
#include <string>

using std::string;

class Isograms
{
public:
	Isograms()
	{
		this->upper—ase = "";
		this->lowerCase = "";
	}
	bool is_isogram(const string& str);
private:
	string upper—ase;
	string lowerCase;
};