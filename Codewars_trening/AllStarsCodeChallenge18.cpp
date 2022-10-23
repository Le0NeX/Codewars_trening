#include "AllStarsCodeChallenge18.h"

unsigned int strCount(string word, char letter)
{
	int wordLenght = word.length();
	int symbolCount = 0;
	for (int i = 0; i < wordLenght; i++)
	{
		if (word[i] == letter)
		{
			symbolCount++;
		}
	}
	return symbolCount;
}