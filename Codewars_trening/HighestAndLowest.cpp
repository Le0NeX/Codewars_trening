#include "HighestAndLowest.h"

string highAndLow(const string& numbers)
{
	const char charArrayNumbers[11] = { '0','1','2','3','4','5','6','7','8','9','-'};
	int numberMaximum = 0;
	
	for (size_t i = 0; i < size(numbers); i++)
	{
		for (size_t j = 0; j < sizeof(charArrayNumbers); j++)
		{
			if (numbers[i] == charArrayNumbers[j])
			{
				numberMaximum = numbers[i];
			}
		}
	}
	return "";
}