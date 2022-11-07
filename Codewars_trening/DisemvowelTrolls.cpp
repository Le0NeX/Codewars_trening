#include "DisemvowelTrolls.h"

string disemvowel(const string& str)
{
	string result = {};
	const char symbolsVowel[10] = { 'a','e','i','o','u','A','E','I','O','U' };
	bool checkSymbol = false;
	
	for (size_t i = 0; i < str.length(); i++)
	{
		for (size_t j = 0; j < sizeof(symbolsVowel); j++)
		{
			if (str[i] == symbolsVowel[j])
			{
				checkSymbol = true;
				break;
			}
		}
		if (!checkSymbol)
		{
			result += str[i];
		}
		else
		{
			checkSymbol = false;
		}
	}

	return result;
}