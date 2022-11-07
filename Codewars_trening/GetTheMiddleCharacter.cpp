#include "GetTheMiddleCharacter.h"

string get_middle(const string& input)
{
	string result = "";
	size_t countSymbols = 0;
	for (size_t i : input)
	{
		countSymbols++;
	}
	int averageCountSymbols = countSymbols / 2;

	if (countSymbols % 2 == 0)
	{
		result += input[averageCountSymbols-1];
		result += input[averageCountSymbols];
	}
	else
	{
		result += input[averageCountSymbols];
	}

	
	return result;
}