#pragma once
#include <vector>

class SumTwoSmallestNumbers
{
public:
	SumTwoSmallestNumbers();
	~SumTwoSmallestNumbers();
	void launchSumTwoSmallestNumbers();
	long sumTwoSmallestNumbers(std::vector<int>& numbers);
private:
	long result;
};
