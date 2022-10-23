#include "Reversed_Strings.h"

string reverseString(string str)
{
	int const SIZE = str.length();
	string Word_reversed = "";


	for (int i = SIZE-1; i >= 0; i--)
	{
		Word_reversed += str[i];
	}
	return Word_reversed;
}