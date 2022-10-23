#include "CountingSheep.h"

void LaunchCountingSheep()
{
	vector<bool> array = {true, false, true, true, false, true, false};
	count_sheep(array);
}

int count_sheep(vector<bool> arr)
{
	int countSheep = 0;
	for (auto i : arr)
	{
		if (i == true)
		{
			countSheep++;
		}
	}
	return countSheep;
}