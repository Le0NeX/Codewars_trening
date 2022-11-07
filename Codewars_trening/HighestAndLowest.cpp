#include "HighestAndLowest.h"

string highAndLow(const string& numbers)
{
	string wordsNumbers = numbers;
	wordsNumbers.append(" ");
	const char charArrayNumbers[10] = { '0','1','2','3','4','5','6','7','8','9'};
	vector<int> numbersArray;
	const size_t SIZE_wordsNumbers = wordsNumbers.size();
	const size_t SIZE_charArrayNumbers = sizeof(charArrayNumbers);
	int buffer = 0;
	bool numberMinus = false;
	for (size_t i = 0; i < SIZE_wordsNumbers; i++)
	{
		for (size_t j = 0; j < SIZE_charArrayNumbers; j++)
		{
			if (wordsNumbers[i] == ' ')
			{
				if (numberMinus == true)
				{
					buffer = buffer / -1;
					numberMinus = false;
				}
				numbersArray.push_back(buffer);
				buffer = 0;
				break;
			}
			if (wordsNumbers[i] == charArrayNumbers[j])
			{
				buffer = buffer * 10 + j;
				break;
			}
			if (wordsNumbers[i] == '-')
			{
				numberMinus = true;
				break;
			}
		}
	}
	const size_t SIZE_numbersArray = numbersArray.size();
	int numberMaximum = numbersArray[0];
	int numberMinimum = numbersArray[0];

	for (size_t i = 0; i < SIZE_numbersArray; i++)
	{
		if (numbersArray[i] > numberMaximum)
		{
			numberMaximum = numbersArray[i];
		}
		if (numbersArray[i] < numberMinimum)
		{
			numberMinimum = numbersArray[i];
		}
	}
	string result = to_string(numberMaximum) + " " + to_string(numberMinimum);
	return result;
}