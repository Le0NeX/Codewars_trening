#include "ShortestWord.h"

int ShortestWord::find_short(const std::string& str)
{
	inputsWord = str;
	inputsWord.push_back(' ');
	result = inputsWord.size();

	for (const char& c : inputsWord)
	{
		if (c != ' ')
		{
			shortestWord += c;
		}
		else
		{
			if (shortestWord.size() < result)
			{
				result = shortestWord.size();
			}
			shortestWord = "";
		}
	}

	return result;
}