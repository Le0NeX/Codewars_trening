#include "VowelCount.h"

void LaunchVowelCount()
{
	getCount("abracadabra");
}

int getCount(const string& inputStr)
{
	size_t inputStrCount = 0;
	inputStrCount = inputStr.length();
	const string vowel = "aeiou";
	size_t vowelCount = 0;
	vowelCount = vowel.length();
	int result = 0;

	for (size_t i = 0; i < inputStrCount; i++)
	{
		for (size_t j = 0; j < vowelCount; j++)
		{
			if (vowel[j] == inputStr[i])
			{
				result++;
			}
		}
	}
	return result;
}