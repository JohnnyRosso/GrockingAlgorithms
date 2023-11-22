#pragma once
#include <vector>
#include "Partition.h"

void QuickSort(std::vector<int>& numbers, int left, int right)
{
    if (left < right)
    {
        srand(time(NULL));
        int pivot = numbers[std::rand() % (right - left) + left];
        std::vector<int> partitionIndex = Partition(numbers, left, right, pivot);

        QuickSort(numbers, left, partitionIndex[0]);
        QuickSort(numbers, partitionIndex[1], right);
    }
}