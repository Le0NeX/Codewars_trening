#pragma once
#include <string>

using std::string;

class Accumul
{
public:
	Accumul()
	{
		this->uppercaseCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		this->lowercaseCharacters = "abcdefghijklmnopqrstuvwxyz";
		this->result = "";
	}
	string accum(const string& s);
	void setCharacters(const string& uppercaseCharacters, const string& lowercaseCharacters)
	{
		this->uppercaseCharacters = uppercaseCharacters;
		this->lowercaseCharacters = lowercaseCharacters;
	}
private:
	string uppercaseCharacters;
	string lowercaseCharacters;
	string result;
};