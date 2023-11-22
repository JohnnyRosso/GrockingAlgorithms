#pragma once
#include <vector>

void Merge(std::vector<int>& numbersLeft, std::vector<int>& numbersRight, std::vector<int>& numbers)
{
    int len1 = numbersLeft.size();
    int len2 = numbersRight.size();
    int len = len1 + len2;
    int iter1 = 0, iter2 = 0;

    for (int i = 0; i < len; i++)
    {
        if (iter1 < len1 && iter2 < len2)
        {
            if (numbersLeft[iter1] < numbersRight[iter2])
            {
                numbers[i] = numbersLeft[iter1];
                iter1++;
            }
            else
            {
                numbers[i] = numbersRight[iter2];
                iter2++;
            }
        }
        else if (iter1 >= len1)
        {
            numbers[i] = numbersRight[iter2];
            iter2++;
        }
        else if (iter2 >= len2)
        {
            numbers[i] = numbersLeft[iter1];
            iter1++;
        }
    }
}