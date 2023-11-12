#pragma once
#include <vector>
#include "Partition.h"

void QuickSort(std::vector<int>& numbers, int left, int right)
{
    if (left < right)
    {
        int pivot = numbers[(left + right) / 2];
        int partitionIndex = Partition(numbers, left, right, pivot);

        QuickSort(numbers, left, partitionIndex - 1);
        QuickSort(numbers, partitionIndex + 1, right);
    }
}