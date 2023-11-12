#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

void SelectionSort(std::vector<int>& numbers)
{
	int size = numbers.size();
	std::vector<int> result;
	
	for (int i = 0; i < size; i++)
	{
		auto min = std::min_element(numbers.begin(), numbers.end());
		result.push_back(*min);
		numbers.erase(min);
	}
	numbers = result;
}