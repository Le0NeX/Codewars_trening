#pragma once
#include <string>

class ShortestWord
{
public:
	ShortestWord()
	{
		inputsWord = "";
		shortestWord = "";
		result = 0;
	}
	int find_short(const std::string& str);
private:
	std::string inputsWord;
	std::string shortestWord;
	int result;
};