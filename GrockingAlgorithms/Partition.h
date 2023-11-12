#pragma once
#include <vector>

int Partition(std::vector<int>& numbers, int left, int right, int pivot)
{
    int equal = left, greater = left, partitionIndex;

    for (int i = left; i < right; i++)
    {
        if (numbers[i] < pivot)
        {
            int tmp = numbers[i];
            numbers[i] = numbers[greater];
            numbers[greater] = numbers[equal];
            numbers[equal] = tmp;

            greater++;
            equal++;
        }
        else if (numbers[i] == pivot)
        {
            std::swap(numbers[greater], numbers[i]);
            greater++;
        }
    }

    partitionIndex = equal;
    return partitionIndex;
}