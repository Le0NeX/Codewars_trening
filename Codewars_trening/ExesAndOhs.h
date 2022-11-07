#pragma once
#include <string>

class ExesAndOhs
{
public:
	ExesAndOhs()
	{
		firstCharacter = 0;
		secondCharacter = 0;
		result = false;
	}

	bool XO(const std::string& str);
private:
	int firstCharacter;
	int secondCharacter;
	bool result;
};