#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

int BinarySearch(std::vector<int> numbers, int value)
{
    int left = 0, right = numbers.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (value == numbers[mid])
            return mid;

        if (value > numbers[mid])
            left = mid + 1;

        else
            right = mid - 1;
    }
    return 0;
}