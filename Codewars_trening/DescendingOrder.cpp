#include "DescendingOrder.h"
bool comp(int i, int j)
{
	return i > j;
}
uint64_t descendingOrder(uint64_t a)
{
	string numberString = "";
	stringstream ss;
	vector<int> numbersArray = {};
	const char symbols[10] = { '0','1','2','3','4','5','6','7','8','9' };
	size_t const SIZE_symbols = sizeof(symbols);
	while (!ss.eof())
	{
		ss << a;
		ss >> numberString;
	}
	size_t const SIZE_numberString = numberString.length();

	for (size_t i = 0; i < SIZE_numberString; i++)
	{
		for (size_t j = 0; j < SIZE_symbols; j++)
		{
			if (numberString[i] == symbols[j])
			{
				numbersArray.push_back(j);
				break;
			}
		}
	}
	size_t SIZE_numbersArray = numbersArray.size();
	sort(numbersArray.begin(), numbersArray.end(), comp);
	string arrayIntToString = {};
	uint64_t result = 0;
	for (size_t i = 0;i < SIZE_numbersArray; i++)
	{
		arrayIntToString += to_string(numbersArray[i]);
	}
	result = std::stoull(arrayIntToString.c_str());
	if (errno == ERANGE)
	{
		printf("Overflow condition occurred.\n");
	}
	return result;
}