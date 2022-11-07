#include "Isograms.h"

bool Isograms::is_isogram(const string& str)
{
	string upper—ase = "";
	string lowerCase = "";
	for (auto i : str)
	{
		lowerCase += tolower(i);
		upper—ase += toupper(i);
	}
	for (size_t i = 0; i < str.size(); i++)
	{
		for (size_t j = 0; j < str.size();j++)
		{
			if (str[i] == lowerCase[j] || str[i] == upper—ase[j])
			{
				if (i == j)
				{
					continue;
				}
				return false; 
			}
		}
	}
	return true;
}