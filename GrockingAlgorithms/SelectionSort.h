#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> SelectionSort(std::vector<int> numbers)
{
	int size = numbers.size();
	std::vector<int> result(size);
	
	for (int i = 0; i < size; i++)
	{
		auto min = std::min(numbers.begin(), numbers.end());
		result.push_back(*min);
		numbers.erase(min);
	}



	return result;
}