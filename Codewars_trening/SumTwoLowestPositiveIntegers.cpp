#include "SumTwoLowestPositiveIntegers.h"
//Constructor the class
SumTwoSmallestNumbers::SumTwoSmallestNumbers()
{
	result = 0;
}
//Destructor the class
SumTwoSmallestNumbers::~SumTwoSmallestNumbers()
{
}

void SumTwoSmallestNumbers::launchSumTwoSmallestNumbers()
{
	std::vector<int>sumTwoSmallestNumbersVector;
	sumTwoSmallestNumbersVector = { 5, 8, 12, 19, 22 };
	sumTwoSmallestNumbers(sumTwoSmallestNumbersVector);
}

long SumTwoSmallestNumbers::sumTwoSmallestNumbers(std::vector<int>& numbers)
{
	return result;
}