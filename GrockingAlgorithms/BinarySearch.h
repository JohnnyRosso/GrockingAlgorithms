#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> BinarySearch(std::vector<int> numbers, int value)
{
    int left = 0, right = numbers.size() - 1, operationCounter = 0;
    std::vector<int> result(2);

    while (left <= right)
    {
        operationCounter++;
        int mid = (left + right) / 2;

        if (value == numbers[mid])
        {
            result[0] = mid;
            result[1] = operationCounter;
            return result;
        }

        if (value > numbers[mid])
            left = mid + 1;

        else
            right = mid - 1;
    }
    result[0] = -1;
    result[1] = operationCounter;
    return result;
}