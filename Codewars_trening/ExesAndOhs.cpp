#include "ExesAndOhs.h"

bool ExesAndOhs::XO(const std::string& str)
{
	for (const char& c : str)
	{
		if ('X' == toupper(c) || 'X' == tolower(c))
		{
			firstCharacter++;
		}
		if ('O' == toupper(c) || 'O' == tolower(c))
		{
			secondCharacter++;
		}
	}
	firstCharacter == secondCharacter ? result = true : result = false;
	return result;
}