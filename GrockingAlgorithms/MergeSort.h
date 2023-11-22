#pragma once
#include<vector>
#include "Merge.h"

void MergeSort(std::vector<int>& numbers)
{
    int len = numbers.size();
    if (len <= 1) return;

    int mid = len / 2;
    std::vector<int> numbersLeft(mid);
    std::vector<int> numbersRight(len - mid);

    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (i < mid)
            numbersLeft[i] = numbers[i];
        else
        {
            numbersRight[j] = numbers[i];
            j++;
        }
    }

    MergeSort(numbersLeft);
    MergeSort(numbersRight);
    Merge(numbersLeft, numbersRight, numbers);
}