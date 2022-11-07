#include "Mumbling.h"

string Accumul::accum(const string &s)
{
	//string uppercaseCharacters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//string lowercaseCharacters = "abcdefghijklmnopqrstuvwxyz";
	//string result = "";
	for (size_t i = 0 ; i < s.length(); i++)
	{
		for (size_t j = 0, k = 0; j < uppercaseCharacters.length(); j++)
		{
			if (s[i] == uppercaseCharacters[j] || s[i] == lowercaseCharacters[j])
			{
				result += uppercaseCharacters[j];
				while (k < i)
				{
					result += lowercaseCharacters[j];
					k++;
				}
				result += '-';
			}
		}
	}
	result.pop_back();
	return result;
}