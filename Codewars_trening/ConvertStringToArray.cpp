#include "ConvertStringToArray.h"

	vector<string> string_to_array(const string& s)
	{
		vector<string> word_vector;
		string buffer = "";
		int SymbolsCount = 0;
		SymbolsCount = s.length();
		string words = s;
		words.push_back('\0');
		for (int i = 0; i < SymbolsCount+1; i++)
		{
			if (words[i] != ' ' && words[i] != '\0')
			{
				buffer += words[i];
			}
			else
			{
				word_vector.push_back(buffer);
				buffer = "";
			}
		}
		return word_vector;
	}