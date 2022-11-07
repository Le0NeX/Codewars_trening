#include "Test.h"
#include <iostream>

using std::cout;

void LaunchTest()
{
	int day = 92;
	double debtSize = 10.00;
	for (size_t i = 0; i < day; i++)
	{
		debtSize += debtSize * 0.3 / 100;
		if (i == 32)
		{
			debtSize += 10;
		}
	}
	cout << "Debt size = " << debtSize;
}